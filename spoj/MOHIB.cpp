#include <cstdio>
#define ll long long
using namespace std;
int main()
{
	ll t;
	scanf("%lld", &t);
	
	while(t--){
		ll x, avg;
		scanf("%lld%lld", &x, &avg);
		printf("%lld\n", ((avg-x)*(1+avg)) - ((avg-x-1)*(avg-x))/2);
	}	
	return 0;
}
