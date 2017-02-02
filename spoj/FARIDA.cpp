#include <cstdio>
#define ll long long

using namespace std;

ll monsters[10009];
ll max_coins[10009];
ll n;

ll max(ll a, ll b){
	if(a>b)
		return a;
	return b;
}


int main()
{
	ll t, count;
	scanf("%lld", &t);
	for(count=1; count<=t; count++){
		ll i;
		scanf("%lld", &n);
		for(i=1; i<=n; i++){
			scanf("%lld", &monsters[i]);
		}
		for(i=1; i<=n; i++)
			max_coins[i] = -1;
		max_coins[1] = monsters[1];
		max_coins[2] = max(monsters[1],monsters[2]);
		ll temp = -1;
		
		for(i=3; i<=n; i++){
			max_coins[i] = max(max_coins[i-1], monsters[i]+max_coins[i-2]);
		}
		printf("Case %lld: %lld\n",count, max_coins[n]); 
	}
	return 0;
}
