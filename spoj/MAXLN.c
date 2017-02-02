#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	double ans;
	long long int r;
	while(t--){
		scanf("%lld", &r);
		ans = 4*r*r + 0.25;
		printf("Case %d: %.2lf.25\n", t+1, 4*r*r);
	}
	return 0;
}
