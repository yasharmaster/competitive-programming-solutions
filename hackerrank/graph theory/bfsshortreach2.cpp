#include <cstdio>
#include <cstdlib>

using namespace std;

class node{
	public:
		int data;
		node* next;
		
		node(int d, node* ptr){
			this->data = d;
			this->next = ptr;
		}
		node(){
			this->data = 0;
			this->next = NULL;
		}
};

class graph{
	public:
		int V;
		int E;
		node * array;
		graph(int V,int E, node* array){
			this->V = V;
			this->array = array;
		}

};


int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	
	node* array = new node[n];
	for(int i = 0; i<n; i++){
		array[i].data = i+1;
	}	
	
	graph* g = new graph(n, m, array);

	for(int i=0; i<m; i++){
		int x, y;
		scanf("%d%d", &x, &y);
		node* temp = new node(y, NULL);
		node * t = &(g->array[x-1]);
		while(t->next != NULL){
			t = t->next;
		}
		t->next = temp;
		
		temp = new node(x, NULL);
		t = &(g->array[y-1]);
		while(t->next != NULL){
			t = t->next;
		}
		t->next = temp;
		
	}
/*		
	for(int i = 0; i<n; i++){
		printf("%d\t:\t",g->array[i].data);
		node* t = g->array[i].next;
		while(t != NULL){
			printf("%d ", t->data);
			t = t->next;
		}
		puts("");
	}
*/
	
	
	
	return 0;
}
