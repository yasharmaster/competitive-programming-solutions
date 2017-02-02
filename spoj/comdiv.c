#include <stdio.h>
#include <math.h>
#define ll long long


ll euclid_gcd(ll a,ll b)
{
    return b==0?a:euclid_gcd(b,a%b);
}

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll a, b;
		scanf("%lld%lld", &a, &b);
		ll gcd = euclid_gcd(a, b);
		ll i, count, ans = 1, n = gcd, s = sqrt(gcd);
		
		for(i=2; i<=s; i++){
			count=0;
			if(n%i==0){
				while(n%i==0){
					n/=i;
					count++;
				}
			}
			ans*= (count+1);
		}
		if(n != 1)
			ans *= 2;
		printf("%lld\n", ans);
	}
	return 0;
}
