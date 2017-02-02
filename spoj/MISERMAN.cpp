#include <cstdio>
#include <cstring>
#include <climits>
#define ll long long

using namespace std;

ll dp[250][250];

ll min(ll a, ll b){
	if(a < b)
		return a;
	return b;
}

int main()
{
	ll i, j, h, w;
	scanf("%lld%lld", &h, &w);
	
	for(i=1; i<=h; i++)
		for(j=1; j<=w; j++)
			scanf("%lld", &dp[i][j]);
	for(i=2; i<=h; i++){
		j=1;
		dp[i][j] = dp[i][j] + min(dp[i-1][j], dp[i-1][j+1]);
		for(j=2; j<=w-1; j++){
			dp[i][j] = dp[i][j] + min(dp[i-1][j], min(dp[i-1][j-1], dp[i-1][j+1]));		
		}
		dp[i][j] = dp[i][j] + min(dp[i-1][j], dp[i-1][j-1]);
	}
	
	ll ans = INT_MAX;
	for(j=1; j<=w; j++)
		ans = min(ans, dp[h][j]);
	printf("%lld\n", ans);
	
	return 0;
}
