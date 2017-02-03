#include <iostream>
#include <cmath>
#include <vector>
#include <set>

#define DBG false
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)
#define MAX 100005

using namespace std;

int n;
vector<int> graph[MAX];
vector<pair<int, int> > edges;
vector<int> color(MAX);
int clr;
int ancestor;

bool same_color(int s, int parent){
	if(color[s] != clr){
		return false;
	}
	bool ans = true;
	vector<int>::iterator itr = graph[s].begin();
	for(; itr != graph[s].end(); itr++){
		if(*itr == parent){
			continue;
		}
		if(!same_color(*itr, s)){
			ans = false;
			break;
		}
	}
	return ans;
}


int function(){
	int u, v;
	bool all_same = true, flag;

	vector<pair<int, int> >::iterator it = edges.begin();
	vector<int>::iterator itr;

	for(; it != edges.end(); it++){
		u = (*it).first;
		v = (*it).second;
		if(color[u]==color[v]){
			continue;
		}
		else{
			all_same = false;
			itr = graph[u].begin();
			flag=true;
			for( ; itr != graph[u].end(); itr++){
				clr = color[*itr];
				if(!same_color(*itr, u)){
					flag=false;
					break;
				}
			}
			if(flag){
				return u;
			}
			itr = graph[v].begin();
			flag=true;
			for( ; itr != graph[v].end(); itr++){
				clr = color[*itr];
				if(!same_color(*itr, v)){
					flag=false;
					break;
				}
			}
			if(flag){
				return v;
			}
			else{
				return -1;
			}
		}
	}
	if(all_same){
		return 1;
	}
}

int main(){
	fast_io;
	cin>>n;
	int a, b;
	REP(i, n-1){
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
		edges.push_back(make_pair(a,b));
	}
	FOR(i, 1, n){
		cin >> color[i];
	}
	int ans = function();
	if(ans==-1){
		cout << "NO";
	}
	else{
		cout << "YES\n" << ans;
	}
	return 0;
}
