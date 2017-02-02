#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

int main()
{
	ll t, n, i;
	scanf("%lld", &t);
	while(t--){
		ll count=0;
		scanf("%lld", &n);
		count = pow(ceil((n-2)/2.0), 2);
		count %= n;
		printf("%lld\n", count);
	}
	return 0;
}
