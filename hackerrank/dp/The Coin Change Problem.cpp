#include <cstdio>
#define ll long long

using namespace std;

int main(){
	ll m, n;
	scanf("%lld%lld", &n, &m);
	ll *coins = new ll[n];
	for(ll i=0; i<m; i++){
		scanf("%lld", &coins[i]);
	}
	ll DP[n+1][m];
	for(ll i=0; i<m; i++){
		DP[0][i] = 1;
	}
	for(ll r=1; r<=n; r++){
		for(ll c=0; c<m; c++){
			ll x, y;
			x = (r-coins[c] >= 0) ? DP[r-coins[c]][c] : 0;
			y = (c >= 1) ? DP[r][c-1] : 0;
			DP[r][c] = x+y;
		}
	}
	printf("%lld", DP[n][m-1]);
	return 0;
}
