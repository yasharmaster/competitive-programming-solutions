#include <cstdio>
#define ll long long

using namespace std;

void merge(ll A[], ll L[], ll R[], ll n, ll nL, ll nR){
	ll i=0, j=0, k=0;
	
	while(i < nL && j < nR){
		if(L[i] <= R[j])
			A[k++] = L[i++];
		else{
			A[k++] = R[j++];
		}
	}
	while(i < nL){
		A[k++] = L[i++];
	}
	while(j <nR)
		A[k++] = R[j++];
}

void mergesort(ll A[], ll n){
	if(n < 2)
		return;	
	
	ll mid = n/2;
	ll L[mid], R[n-mid];
	
	for(ll i=0; i <mid; i++)
		L[i] = A[i];
	for(ll i=0; i<n-mid; i++)
		R[i] = A[mid + i];
	
	mergesort(L, mid);
	mergesort(R, n-mid);
	merge(A, L, R, n, mid, n-mid);
}

int main()
{
	while(1){
		ll n, i;
		scanf("%lld", &n);
		if(n==0)
			break;
		ll C[n], P[n];
		for(i=0; i<n; i++)
			scanf("%lld", &C[i]);
		for(i=0; i<n; i++)
			scanf("%lld", &P[i]);
		mergesort(C, n);
		mergesort(P, n);
		ll sum = 0;
		for(i=0; i<n; i++)
			sum += C[i]*P[n-1-i];
		printf("%lld\n", sum);
	}
	return 0;
}
