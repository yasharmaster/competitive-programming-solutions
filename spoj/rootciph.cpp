#include <cstdio>
#define ll long long
using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll a, b, c;
		scanf("%lld%lld%lld", &a, &b, &c);
		printf("%lld\n", a*a - 2*b);		
	}	
	return 0;
}
