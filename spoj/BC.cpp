#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	ll i;
	for(i=1; i<=t; i++){
		double a, b, c;
		scanf("%lf%lf%lf", &a, &b, &c);
		ll ans1, ans2;
		ans1 = a*b*c - 1;
		ans2 = ceil(log2(a)) + ceil(log2(b)) + ceil(log2(c))  ;
		printf("Case #%lld: %lld %lld\n", i, ans1, ans2);
	}
	return 0;
}
