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
		ll count=0, i=n;
		while(i--){
			ll c;
			scanf("%lld", &c);
			count += c%n;
			count %= n;
		}
		if(count == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
