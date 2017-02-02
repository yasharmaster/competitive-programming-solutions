#include <cstdio>

#include <climits>

using namespace std;

void merge(int A[], int L[], int R[], int n, int nL, int nR){
	int i=0, j=0, k=0;
	
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

void mergesort(int A[], int n){
	if(n < 2)
		return;	
	
	int mid = n/2;
	int L[mid], R[n-mid];
	
	for(int i=0; i <mid; i++)
		L[i] = A[i];
	for(int i=0; i<n-mid; i++)
		R[i] = A[mid + i];
	
	mergesort(L, mid);
	mergesort(R, n-mid);
	merge(A, L, R, n, mid, n-mid);
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k, i, min = INT_MAX;
		scanf("%d%d", &n, &k);
		int A[n];
		for(i=0; i<n; i++)
			scanf("%d", &A[i]);
		mergesort(A, n);

		i=0;
		while(i+k-1 < n){
			if(A[i+k-1] - A[i] < min)
				min = A[i+k-1] - A[i];
			i++;
		}
		printf("%d\n", min);
	}
	return 0;
}
