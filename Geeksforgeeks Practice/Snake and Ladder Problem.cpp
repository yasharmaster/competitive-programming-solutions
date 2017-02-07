#include <iostream>
#include <climits>
#include <cmath>
#include <map>
#include <queue>

#define MAX 31
#define source 1

using namespace std;

void bfs(int G[MAX][MAX]){
    int level[MAX];
    bool visited[MAX];
    for(int i=0; i<MAX; i++){
        level[i] = INT_MAX;
        visited[i] = false;
    }
    level[source] = 0;
    queue<int> q;
    q.push(source);
    int u;
    while(!q.empty()){
        u = q.front();
        q.pop();
        visited[u] = true;
        for(int v=1; v<=30; v++){
            if(G[u][v] && !visited[v]){
                q.push(v);
                level[v] = min(level[v], level[u]+1);
            }
        }
    }
    cout << level[30] << endl;
}

int main() {
	//code
	int t, N;
	cin >> t;
	map<int, int> mymap;
	while(t--){
	    cin >> N;
	    int a, b;
	    while(N--){
	        cin >> a >> b;
	        mymap[a] = b;
	    }
	    int G[MAX][MAX];
	    for(int i=0; i<MAX; i++){
	        for(int j=0; j<MAX; j++){
	            G[i][j] = 0;
	        }
	    }
	    for(int i=1; i<30; i++){
	        for(int j = i+1; j<=30 && j<=i+6; j++){
	            if(mymap.find(j) == mymap.end()){
	                G[i][j] = 1;
	            }
	            else{
	                G[i][mymap[j]] = 1;
	            }
	        }
	    }
	    bfs(G);
	    mymap.clear();
	}
	return 0;
}