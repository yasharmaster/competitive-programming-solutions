#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

int main()
{
	ll t, i;
	scanf("%lld", &t);
	for(i=1; i<=t; i++){
		double n0, n1, t, n;
		scanf("%lf%lf%lf%lf", &n0, &n1, &t, &n);
		double k = log(n1/n0) * (1/t);
		
		double ans = log(n/n0) * (1/k);
		printf("Scenario #%lld: %.2lf\n", i, ans);
	}
	return 0;
}
