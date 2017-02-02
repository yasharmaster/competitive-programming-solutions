#include <cstdio>
#define ll unsigned long long
 
using namespace std;
 
inline void fastRead(ll *a)
{
	register char c=0;
	while (c<33)
		c=getchar_unlocked();
	*a=0;
	while (c>33)
	{
		*a=*a*10+c-'0';
		c=getchar_unlocked();
	}
}
 
int main()
{
	ll n, i, temp, j, ans=0;
	fastRead(&n);
	ll A[n];
	for(i=0; i<n; i++){
		fastRead(&A[i]);
	}
	for(i=0; i<n; i++)
		for(j=i+1; j<n; j++)
			ans |= A[i]^A[j];
 	printf("%llu", ans);
	return 0;
}
