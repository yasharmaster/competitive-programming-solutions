#include<stdio.h>
#include<math.h>
int main()
{
	int t, count;
	double a, b, c, x;
	scanf("%d", &t);
	while(t--){
		count=0;
		scanf("%lf%lf%lf",&a,&b,&c);
		x=c/a;
		while(count<40){
			x = x - (a*x + b*sin(x) - c)/(a + b*cos(x));
			count++;
		}
		printf("%.6lf\n", x);
	}
	return 0;
}
		
