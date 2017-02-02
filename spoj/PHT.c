#include<stdio.h>
#include<math.h>
int main()
{
	long int t, i=1;
	scanf("%ld", &t);
	long long int n, l;
	while(i<=t){
		scanf("%lld", &n);
		l = sqrt(n+1) - 1;
		printf("Case %d: %lld\n", i, l);
		i++;
	}
	return 0;
}
