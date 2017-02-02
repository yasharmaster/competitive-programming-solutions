#include <cstdio>
#define ll long long

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n, i;
		scanf("%lld", &n);
		double ans=0;
		for(i=1; i<= n; i++){
			ans += double(n/double(i));
			
		}
		printf("%.2lf\n", ans);
	}
	return 0;
}
