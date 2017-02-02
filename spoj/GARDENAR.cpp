#include <cstdio>
#include <cmath>



using namespace std;

double fn(double n){
	return (n*n*sqrt(3))/4.0;
}

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--){
		double a, b, c;
		scanf("%lf%lf%lf", &a, &b, &c);
		double s = (a+b+c)/2.0, ans;
		
		ans = (fn(a)+fn(b)+fn(c) + 3*sqrt(s*(s-a)*(s-b)*(s-c)))/2.0;
		
		printf("%.2lf\n", ans);
	}
	
	return 0;
}
