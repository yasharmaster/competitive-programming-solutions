#include <cstdio>
#define ll long long

using namespace std;

int main()
{
	ll n, i, t=1;
	while(1){
		scanf("%lld", &n);
		if(n == -1)
			break;
		else{
			ll coeff[n+1];
			for(i=0; i<=n; i++)
				scanf("%lld", &coeff[i]);
			ll k;
			scanf("%lld", &k);
			printf("Case %lld:\n", t++);
			while(k--){
				ll temp;
				scanf("%lld", &temp);
				ll b = coeff[0];
				for(ll x=1; x<=n; x++)
					b = b*temp + coeff[x];
				printf("%lld\n", b);
			}
		}
	}
	return 0;
}
