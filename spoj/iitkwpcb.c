#include<stdio.h>
int gcd(long long int a, long long int b)
{	
	long long int divd = a>=b ? a:b;
	long long int divr = b <=a ? b:a;
	while(divr != 0) {
		long long int remainder = divd % divr;
		divd = divr;
		divr = remainder;
	}	
	return divd;
}
int main()
{
	int t;
	scanf("%d", &t);
	long long int n, i;
	while(t--) {
		
		scanf("%lld", &n);
		i = n/2;
		while(1){
			if (gcd(n, i) == 1){
				printf("%lld\n", i);
				break;
			}
			i--;
		}
	}
	return 0;
}
