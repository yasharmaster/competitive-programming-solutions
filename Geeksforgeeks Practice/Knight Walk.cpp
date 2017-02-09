#include <bits/stdc++.h>

#define DBG false
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

using namespace std;

int n, m, sx, sy, dx, dy;

typedef pair<int, int> Position;
Position dest;
vector<Position> dir;

void init_directions(){
	dir.pb(mp(2,1));
	dir.pb(mp(2,-1));
	dir.pb(mp(-2,1));
	dir.pb(mp(-2,-1));
	dir.pb(mp(1,2));
	dir.pb(mp(-1,2));
	dir.pb(mp(1,-2));
	dir.pb(mp(-1,-2));
}

void add_all_neighbors(queue<Position> &q, Position &u, map<Position, bool> &visited, map<Position, int> &cost){
	int ux = u.first, uy = u.second;
	int xinc,yinc,vx,vy;
	vector<Position>::iterator itr = dir.begin();
	for(; itr != dir.end(); itr++){
		xinc = (*itr).first; yinc = (*itr).second;
		vx = ux+xinc;	vy = uy+yinc;
		if(vx>0 && vx<=n && vy>0 && vy<=m){
			Position v = mp(vx,vy);
			if(!visited[v]){
				q.push(v);
				visited[v]=true;
				cost[v] = cost[u]+1;
			}
		}
	}
}

int bfs(){
	map<Position, bool> visited;
	map<Position, int> cost;
	Position u;
	FOR(i, 0, n-1){
		FOR(j, 0, m-1){
			u = mp(i,j);
			visited[u] = false;
			cost[u] = INT_MAX;
		}
	}
	u = mp(sx, sy);
	queue<Position> q;
	q.push(u);
	visited[u] = true;
	cost[u] = 0;
	while(!q.empty()){
		Position u = q.front();
		q.pop();
		if(u==dest){
			return cost[dest];
		}
		add_all_neighbors(q, u, visited, cost);
	}
	if(visited[mp(dx,dy)]){
		return cost[mp(dx,dy)];
	}
	
	return -1;
}

int main(){
	fast_io;
	init_directions();
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		cin >> sx >> sy >> dx >> dy;
		dest=mp(dx,dy);
		cout << bfs() << endl;
	}
	return 0;
}
