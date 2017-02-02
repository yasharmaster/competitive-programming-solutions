#include <cstdio>

#define ll long long

using namespace std;

double tan_add(double a, double b){
	return (a + b)/(1-a*b);
}

double tan(ll n, double value){
	if (n==1){
		return value;
	}
	else if(n==0) {
		return 0;
	}
	else if(!n&1){
		double a = tan(n>>1, value);
		return tan_add(a, a);
	}
	else{
		double a = tan(n-1, value);
		return tan_add(a, value);
	}
}

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n;
		double p, q;
		scanf("%d%lf%lf",&n, &p, &q);
		double value = p/q;
		n = ((long long)(tan(n,value)))%1000000007;
		printf("%lld\n", n);
	}
}
