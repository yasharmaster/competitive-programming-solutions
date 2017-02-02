#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	double n;
	while(t--){
		scanf("%lf", &n);
		printf("%.8lf\n", (n-1)/n + 1/((n)*(n+1)));
	}
	return 0;
}
