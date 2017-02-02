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
		
		if(!(n&1)){
			printf("%lld\n", (n*(n+2)*((2*n)+1))/8);
		}
		else{
			printf("%lld\n", ((n*(n+2)*((2*n)+1))-1)/8 );
		}
		
	}
	return 0;
}
