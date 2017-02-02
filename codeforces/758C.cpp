#include <iostream>
#include <climits>
#include <string>

#define DBG false
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

using namespace std;

#define ll long long;

ll n, m, k,x, y;
ll maxi = INT_MIN, mini = INT_MAX;

int main(){
	fast_io;
	cin >> n >> m >> k >> x >> y;
	ll T = (n-1)*m + m*n;
	ll times = k/T;
	ll remaining = k%T;
	int done = 0;
	int r = 0, c = 0;
	while(done < remaining){
		if(r<n){
			
		}
	} 
	
		
	return 0;
}
