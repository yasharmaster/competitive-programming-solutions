#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	long long int x, y, sum, n, d, i, a;
	while (t--){
		scanf("%lld%lld%lld", &x, &y, &sum);
		n = (2*sum)/(x+y);
		printf("%lld\n", n);
		d = (y-x)/(n-5);
		a = x-2*d;
		for (i=0; i<=n-1; i++){
			printf("%lld ", a+(i)*d );
		}
		printf("\n");		
	}
	return 0;
}
