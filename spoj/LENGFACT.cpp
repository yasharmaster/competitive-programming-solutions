#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	double pi = acos(-1);
	while(t--){
		double n;
		scanf("%lf", &n);
		if(n == 0.00 || n==1.00)
			printf("1\n");
		else{
			ll len;
			len = ((log(2.00*pi*n)/2.00) + (n*(log(n) - 1.00)))/log(10.00) + 1;
			printf("%lld\n", len);
		}	
	}
	return 0;
}
