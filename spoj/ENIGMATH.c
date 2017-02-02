#include<stdio.h>
int gcd(int a, int b)
{
	int divd = b>a ? b :a, divr = b<a ? b :a, rem;
	while(divr != 0){
		rem = divd % divr;
		divd = divr;
		divr = rem;
	}
	return divd;	
}
int main()
{
	int t;
	scanf("%d", &t);
	int a, b, c;
	while(t--){
		scanf("%d%d", &a, &b);
		c = gcd(a,b);
		printf("%d %d\n", b/c, a/c);
	}
	return 0;
}
