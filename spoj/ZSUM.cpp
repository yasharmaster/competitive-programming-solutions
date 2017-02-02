#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

ll mod_exp(ll base, ll exponent, ll mod){ 	//
	ll result = 1;
	
	while(exponent > 0){
		if(exponent & 1)
			result = (result*base)%mod;
				
		exponent = exponent >> 1;
		base = (base*base)%mod;
	}
	
	return result;
}

int main()
{
	ll n, k;
	const ll Z = 10000007;
	while(1){
		scanf("%lld%lld", &n, &k);
		if(n==0 && k==0)
			break;
		ll ans = 0;
		ans += 2*mod_exp(n-1, k, Z);
		ans %= Z;
		ans += 2*mod_exp(n-1, n-1, Z);
		ans %= Z;
		ans += mod_exp(n, k, Z);
		ans %= Z;
		ans += mod_exp(n, n, Z);
		ans %= Z;
		printf("%lld\n", ans);
	}
	return 0;
}
