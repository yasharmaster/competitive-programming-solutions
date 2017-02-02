#include <cstdio>
#include <map>

#define ll long long
#define PRIME 1000000007
using namespace std;

map<ll, ll> fibonacci;

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

ll fibo(ll n){
	if(fibonacci.find(n) != fibonacci.end()){
//		printf("fib (%lld) = %lld\n", n, fibonacci[n]);
		return fibonacci[n];
	}
	if(!(n&1)){
	//	fibonacci[n] = (2*fibo(n/2 - 1) + fibo(n/2))*fibo(n/2);
		fibonacci[n] = (2*fibo(n/2 - 1) + fibo(n/2))%PRIME ;

		fibonacci[n] *= fibo(n/2);
		fibonacci[n] %= PRIME;
	}
	else{
	//	fibonacci[n] = fibo((n+1)/2 -1)*fibo((n+1)/2 -1) + fibo((n+1)/2)*fibo((n+1)/2);
		ll temp = mod_exp(fibo((n+1)/2 -1),2,PRIME);
		ll temp2 = mod_exp(fibo((n+1)/2),2,PRIME);
		fibonacci[n] = (temp+temp2)%PRIME;
		
		
	}
//	printf("fib (%lld) = %lld\n", n, fibonacci[n]);
	return fibonacci[n];
}

int main()
{
	int t;
	scanf("%d", &t);
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	fibonacci[2] = 1;
	while(t--){
		ll n, m, i, ans=0;
		scanf("%lld%lld", &n, &m);
		for(i=n; i<=m; i++){
			ans += fibo(i);
	//		printf("fibo (%lld) : %lld\n", i, fibo(i));
			ans %= PRIME;
		}
		printf("%lld\n", ans);
	}
//	printf("%lld\n", fibo(30));
	return 0;
}
