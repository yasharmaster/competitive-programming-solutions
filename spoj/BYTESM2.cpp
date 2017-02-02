#include <cstdio>
#include <cstring>
#define ll long long

using namespace std;

ll dp[250][250];

ll max(ll a, ll b){
	if(a > b)
		return a;
	return b;
}

int main()
{
	ll t, i, j;
	scanf("%lld", &t);
	memset(dp, -1, sizeof(dp[0][0])*249*249);
	while(t--){
		ll h, w;
		scanf("%lld%lld", &h, &w);
		for(j=0; j<=w+1; j++)
			dp[0][j] = 0;
		for(i=1; i<=h; i++)
			for(j=1; j<=w; j++)
				scanf("%lld", &dp[i][j]);
	
		for(i=0; i<=h; i++)
			dp[i][w+1] = -1;
		for(i=1; i<=h; i++){
			for(j=1; j<=w; j++){
				dp[i][j] = dp[i][j] + max(dp[i-1][j], max(dp[i-1][j-1], dp[i-1][j+1]));
			}
		}
		ll ans = -1;
		for(j=1; j<=w; j++)
			ans = max(ans, dp[h][j]);
		printf("%lld\n", ans);
	}	
	return 0;
}
