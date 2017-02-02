#include <cstdio>
#define ll long long
using namespace std;

int main()
{
	ll n, k, count = 0;
	scanf("%lld%lld", &n, &k);
	while(n--){
		ll p;
		scanf("%lld",&p);
		if(p%k == 0)
			count++;
	}
	printf("%d", count);
	return 0;	
}
