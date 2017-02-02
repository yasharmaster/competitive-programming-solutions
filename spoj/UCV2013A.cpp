#include <cstdio>
#define ll long long

using namespace std;

ll modular_exponentiation(ll base, ll exponent, ll mod){ 	
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
	while(1){
		ll n, l;
		scanf("%lld%lld", &n, &l);
		if(n==0 && l==0)
			break;
		ll i, sum = 0;
		for(i=1; i<=l; i++){
			sum += modular_exponentiation(n, i, 1000000007 );
			sum %= 1000000007;
		}
		printf("%lld\n", sum);
	}
	return 0;
}
