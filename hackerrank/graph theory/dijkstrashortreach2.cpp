#include <cstdio>

using namespace std;

class Edge{
public:
	int source, destination, weight;
	Edge(int x, int y, int z){
		source = x;
		destination = y;
		weight = z;
	}
	
	void print_edge(){
		printf("%d - %d : %d", source, destination, weight);
	}
};

class Graph{
	int V, E;
	Edge** array_edges;
	
	Graph(int e, int v){
		E = e;
		V = v;
		array_edges = new Edge*[e];
	}
	
	void print_edges(){
		for(int i =0; i<E; i++){
			printf("%d  --  %d  :  %d\n", array_edges[i]->source, array_edges[i]->destination, array_edges[i]->weight);
		}
	}
	
	void dijkstra(int source){
		int* visited = new int[V];
		int* NodeToHeap = new int[V];
		int* HeapToNode = new int[V];
		int edge_sum=0;
		int* heap_array = new int[V];
		for(int i=0;i<E;i++){
			edge_sum += array_edges[i]->weight;
		}
		for(int i=0;i<V;i++){
			NodeToHeap[i] = i;
			HeapToNode[i] = i;
			visited[i] = -1;
			heap_array[i] = edge_sum+1;
		}
		heap_array[source] = 0;
		Min_Heap* heap = new Min_heap(V, heap_array);
		

	}
};

class Min_Heap{
public:
	int size;
	int* array;
	int* HeapToNode;
	int* NodeToHeap;
	Min_Heap(int s, int* ptr){
		size = s;
		array = ptr;
		HeapToNode = new int[s];
		NodeToHeap = new int[s];
		for(int i=0; i<s;i++){
			HeapToNode[i] = i;
			NodeToHeap[i] = i;
		}
		build_heap();
	}
	
	void build_heap(){
		for(int i=size/2; i>=0; i--){
			heapify(i);
		}
	}
	
	void heapify(int p){
		int l = 2*p+1;
		int r = l + 1;
		int min = p;
		
		if(l<size && array[l] < array[p]){
			min = l;
		}
		if(r<size && array[r] < array[min]){
			min = r;
		}
		if(min != p){
			swap(p, min);
			heapify(min);
		}
	}
	
	void swap(int x, int y){
		int temp = array[x];
		array[x] = array[y];
		array[y] = temp;
	}
	
	int extract_min(){
		if(size == 0){
			return -1;
		}
		int min = array[0];
		array[0] = array[size-1];
		size--;
		heapify(0);
		return min;
	}
	
	void update(int index, int value){
		if(index < size){
			if(array[index] > value){
				array[index] = value;
				int parent = (index-1)>>1;
				while(array[parent] > array[index] && parent >=0){
					swap(parent, index);
					index = parent;
					parent = (index-1)>>1;
				}
			}
			else if(array[index]< value){
				array[index] = value;
				int left = 2*index + 1;
				int right = left+1;
				int min_child = array[left] < array[right] ? left : right;
				while(array[min_child] < array[index] && min_child<size){
					swap(min_child, index);
					index = min_child;
					left = (index+1)<<1;
					right = left+1;
					min_child = array[left] < array[right] ? left : right;
				}
			}
		}
	}
	
	void print_array(){
		for(int i=0; i<size; i++){
			printf("%d ", array[i]);
		}
		puts("");
	}
};

int main()
{
	
	return 0;
}
