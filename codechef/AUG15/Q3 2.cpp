#include <cstdio>
#include <cmath>
#define ll long long
using namespace std;
int main()
{	
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		if(n<=2){
			printf("%lld\n", n);
			continue;
		}
		double temp = ceil((n-2)/2.0) + 2;
		printf("%lld\n", (ll)temp);
	}
	return 0;
}
