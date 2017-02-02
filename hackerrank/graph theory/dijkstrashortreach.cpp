#include <cstdio>
#include <climits>

using namespace std;

class Edge{
public:
	int source, destination, weight;
	Edge(int a, int b, int c){
		source = a;
		destination = b;
		weight = c;
	}
};

class Min_Heap{
public:
	int size;
	int* array;
	
	Min_Heap(int s, int *ptr){
		size = s;
		array = ptr;
		build_heap();
	}
	
	void heapify(int p){
		int l = 2*p + 1;
		int r = l + 1;
		int max = p;
		
		if(l < size && array[l] < array[p])
			max = l;
			
		if(r < size && array[r] < array[max])
			max = r;
		
		if(max != p){
			int temp = array[max];
			array[max] = array[p];
			array[p] = temp;
			heapify(max);
		}
	}
	
	void build_heap(){
		for(int i=size/2; i>=0; i--){
			heapify(i);
		}
	}
	
	int delete_min(){
		
		return 0;
	}
	
	void swap(int *a, int *b){
		int t = *a;
		*a = *b;
		*b = t;
	}
	
	int max(int *a, int *b){
		return *a > *b ? *a : *b;
	}
	
	void update(int index, int value){
		
	}
	
	void print_array(){
		for(int i =0; i<size; i++){
			printf("%d ", array[i]);
		}
		puts("");
	}
};

class Graph{
public:
	int V, E;
	Edge** array_edges;
	
	Graph(int v, int e){
		V = v;
		E = e;
		array_edges = new Edge*[e];
	}
	
	void print_edges(){
		for(int i =0; i<E; i++){
			printf("%d  --  %d  :  %d\n", array_edges[i]->source, array_edges[i]->destination, array_edges[i]->weight);
		}
	}
	
	void dijkstra(int source){
		int visited[V], expected_burn_time[V], node_to_heap[V], heap_to_node[V], edge_sum=0;
		for(int i=0; i<V; i++){
			visited[i] = -1;
		}
		for(int i=0; i<E; i++){
			edge_sum += array_edges[i]->weight;
		}
		for(int i =0; i<V; i++){
			expected_burn_time[i] = edge_sum+1;
			node_to_heap[i] = i;
			heap_to_node[i] = i;
		}
		Min_Heap* heap = new Min_Heap(V, expected_burn_time);
		heap->update(node_to_heap[source], 0);
		
	}
};



int main(){
/*	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d%d", &n, &m);
		Graph* graph = new Graph(n, m);
		for(int i=0; i<n; i++){
			int x,y,z;
			scanf("%d%d%d", &x, &y, &z);
			graph->array_edges[i] = new Edge(x,y,z);
		}
		int source;
		scanf("%d", &source);
	//	graph->print_edges();
		graph->dijkstra(source-1);
	}
	
	*/
	
	
	int A[] = {12,8,15,3,7,20,2};
	Min_Heap* mh = new Min_Heap(7, A);
	mh->build_heap();
	mh->print_array();
	
	return 0;
}
