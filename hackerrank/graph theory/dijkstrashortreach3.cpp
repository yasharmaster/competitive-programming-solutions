#include <cstdio>
#include <queue>  

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

class Node_Distance{
	int distance;
	int node;
	Node_Distance(int d, int n){
		distance = d;
		node = n;
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
		int* distance = new int[V];
		int edge_sum = 0;
		for(int i=0; i<E; i++){
			edge_sum += array_edges[i]->weight;
		}
		for(int i=0; i<V; i++){
			visited[i] = 0;
			distance[i]=edge_sum+1;
		}
		distance[source]=0;
		
		for(int i=0; i<V; i++){
			
		}
		

	}
};

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d%d", &n, &m);
		Edge** array_edges;
		for(int i=0; i<n;i++){
			int x,y,z;
			scanf("%d%d%d", &x, &y, &z);
			array_edges[i] = new Edge(x,y,z);
		}
		Graph* graph = new Graph(n,array_edges);
	}
	
	return 0;
}
