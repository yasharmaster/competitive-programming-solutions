#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		ll i, A[n], sum =0;
		for(i=0; i<n; i++){
			scanf("%lld", &A[i]);
			sum += A[i];
			A[i] -= sum;
		}
		sum = 0;
		for(i=0; i<n; i++)
			sum += abs(A[i]);
		printf("%lld\n", sum);
	}
	return 0;
}
