#include <cstdio>
#define ll long long
using namespace std;

ll phi(ll n){
	ll i, result = n;
	for(i=2;i*i <= n; i++){		
		if(n%i==0){
			result -= result/i;
			while(n%i==0)
				n /= i;
		}
	}
	if(n > 1)
		result -= result/n;
	return result;
}

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n, count=0;
		scanf("%lld", &n);
		printf("%lld\n", phi(n));
	}
	return 0;
}
