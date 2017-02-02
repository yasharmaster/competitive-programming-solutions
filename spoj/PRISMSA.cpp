#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		double vol;
		scanf("%lf", &vol);
		double a = pow(4*vol, 1/(3.0));
		double h = (2*a*sin(2*acos(0)/(3.0)))/(3.0);
		double min_area = a*a*sin(2*acos(0)/(3.0)) + 3*a*h;
		printf("%.10lf\n", min_area);
	}
	return 0;
}
