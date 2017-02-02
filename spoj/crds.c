#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	long long int n;
	while(t--) {
		scanf("%lld", &n);
		printf("%lld\n", ( n*(n+1) + (n*(n-1))/2 )%1000007 );
	}
	return 0;
}
