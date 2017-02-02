#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		double a, b, c, d, s, max_area;
		scanf("%lf%lf%lf%lf", &a,&b,&c,&d);
		s = (a+b+c+d)/2;
		max_area = pow(((s-a)*(s-b)*(s-c)*(s-d)), 0.5);
		printf("%.2lf\n", max_area);
	}
	return 0;
}
