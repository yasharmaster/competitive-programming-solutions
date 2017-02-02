#include <stdio.h>
int main()
{
	long long n, i, j;
	scanf("%llu",&n);
	unsigned long long quan[n], total=0;
	for(i=0; i<n; i++){
		scanf("%llu", &quan[i]);
	}
	for(i=0; i<=n-2; i++){
		for(j=i+1; j<n; j++){
			total += quan[i]^quan[j];
		}
	}
	printf("%llu", total);
	return 0;
}
