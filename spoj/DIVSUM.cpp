#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

ll power(ll base, ll exp){
	ll i, ans=1;
	for(i=1; i<=exp; i++)
		ans*= base;
	return ans;
}

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n, count, ans=1, temp, i, j;
		scanf("%lld", &n);
		ll yo =n;
		if(n==0 || n==1)
			printf("0\n");
		else{
			for(i=2; i<=sqrt(n); i++){
				count=0;
				if(n%i==0){
					count=0;
					while(n%i==0){
						n/=i;
						count++;
					}
				}
				temp=0;
				for(j=0; j<=count; j++)
					temp += power(i, j);
				ans *= temp;
			}
			if(n!= 1)
				ans *= n+1;
			ans -= yo;
			printf("%lld\n", ans);
		}
	}
	return 0;
}
