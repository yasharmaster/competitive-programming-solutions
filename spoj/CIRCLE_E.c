#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		double a, b, c, d, p, q, r, s;
		scanf("%lf%lf%lf", &a, &b, &c);
		p = 1/a;
		q = 1/b;
		r = 1/c;
		
		s = p + q + r + 2*sqrt((p*q) + (q*r) + (r*p));
		d = 1/s;
		printf("%.6lf\n", d);
	}
	return 0;
}
