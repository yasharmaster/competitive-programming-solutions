#include <iostream>
#include <vector>
#include <stack>

#define DBG false
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;

int n;
vvi A(20000+1);
vi P(20000+1);
vector<bool> visited(20000+1, false);

void dfs(int n){
	stack<int> s;
	s.push(n);
	
	while(!s.empty()){
		int a = s.top();
		s.pop();
		for(auto i = A[a].begin(); i != A[a].end(); i++){
			if(!visited[*i]){
				s.push(*i);
			}
		}
		visited[a] = true;
	}
}

int main(){
	fast_io;
	cin>>n;
	FOR(i, 1, n){
		cin >> P[i];
		A[P[i]].pb(i);
		A[i].pb(P[i]);
	}
	int temp = 0;
	FOR(i, 1, n){
		if(!visited[i]){
			dfs(i);
			temp++;
		}
	}
	cout<<temp;
	return 0;
}
