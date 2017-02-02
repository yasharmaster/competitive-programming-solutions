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
		
		ll x = (n-1)/4, y = n%4;
		x *= 1000;
		
		switch(y){
			case 1:
				x+= 192;
				break;
			case 2:
				x+= 442;
				break;
			case 3:
				x+= 692;
				break;
			case 0:
				x+= 942;
				break;			
		}
		printf("%lld\n", x);
	}
	return 0;
}
