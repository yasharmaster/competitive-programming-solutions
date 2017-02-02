#include <iostream>
#include <cstdio>
#include <cmath>
#define ll long long
#include <map>

using namespace std;

map<ll, ll> fact;

ll factorial(ll n){
	if(fact.find(n) == fact.end()){
		fact[n] = n*factorial(n-1);
		return fact[n];
	}
	return fact[n];
}

int main()
{
	fact[0] = 1; fact[1] = 1;
	ll n, k;
	while(scanf("%lld%lld", &n, &k) != EOF){
		ll ans = factorial(n);
		ll x;
		while(k--){
			scanf("%lld", &x);
			ans /= factorial(x);
		}
		printf("%lld\n", ans);
	}
	return 0;
}
