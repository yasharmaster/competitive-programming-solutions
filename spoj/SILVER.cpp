#include <cstdio>
#define ll long long

using namespace std;

int main()
{
	ll n;
	while(1){
		scanf("%lld", &n);
		if(n==0)
			break;
		else{
			ll count = 0;
			while(n>1){
				n = n >> 1;
				count++;
			}
			printf("%lld\n", count);
		}
	}
	return 0;
}
