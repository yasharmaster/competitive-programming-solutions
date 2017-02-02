#include <cstdio>
#define ll long long
using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		printf("%lld\n", (n/4)*3 + n%4);	
	}
	return 0;
}
