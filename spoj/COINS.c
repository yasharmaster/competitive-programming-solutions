#include <cstdio>
#
#define ll long long

ll	A[1000000];

using namespace std;

ll function(ll n){
	ll temp;
	if(A[n] == -1)
	{
		temp = A[n/2] + A[n/3] + A[n/4];
		if(n < temp)
			A[n] = temp;
		else
			A[n] = n;
		return A[n];
	}
	else
		return A[n];
}

int main()
{
	for(ll i=0; i<=250000000; i++)
		A[i] = -1;
	ll n;
	while(while(scanf("%lld", n) != EOF)){
		printf("%lld\n", fun(n));
	}
	return 0;
}
