#include <cstdio>
#include <math.h>
#include <cstdlib>
#define ll long long

using namespace std;

ll modular_exponentiation(ll base, ll exponent, ll mod){ 	//
	ll result = 1;
	
	while(exponent > 0){
		if(exponent & 1)
			result = (result*base)%mod;
				
		exponent = exponent >> 1;
		base = (base*base)%mod;
	}
	
	return result;
}

bool is_prime(ll p){
	if(p <= 1 )
		return false;
	int i;
	for(i=0; i <100; i++){
		ll n = rand()%(p-1) + 1;
		
		if(modular_exponentiation(n, p-1, p) != 1)
			return false;
	}
	return true;	
}

int main()
{
	ll n, i;
	scanf("%lld", &n);
	for(i=0; i<n; i++){
		ll p;
		scanf("%lld", &p);
		if(is_prime(p))
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}
