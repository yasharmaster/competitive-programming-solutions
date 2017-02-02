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
		ll count = 1, temp = 1;
		while(n - (temp*5) > 0){
			temp *= 5;
			n -= temp;
			count++;
		}
		n -= 1;
		ll i;
		int A[count];
		for(i=1; i<=count; i++){
			A[count-i] = n%5;
			n /= 5;
		}
		for(i=0; i<count; i++){
			switch(A[i]){
				case 0:
					printf("m");
					break;
				case 1:
					printf("a");
					break;
				case 2:
					printf("n");
					break;
				case 3:
					printf("k");
					break;
				case 4:
					printf("u");
					break;
			}
		}
		printf("\n");
	}
	return 0;
}
