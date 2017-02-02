#include <cstdio>

using namespace std;

int partition(int A[], int start, int end){
	int pivot = A[end];
	int pIndex = start, temp;
	
	for(int i=start; i<end; i++){
		if(A[i] < pivot){
			temp = A[i];
			A[i] = A[pIndex];
			A[pIndex] = temp;
			pIndex++;
		}
	}
	temp = A[pIndex];
	A[pIndex] = pivot;
	A[end] = temp;
	return pIndex;
}

void quicksort(int A[], int start, int end){
	if(start < end){	
		int pIndex = partition(A, start, end);
		quicksort(A, start, pIndex-1);
		quicksort(A, pIndex+1, end);
	}
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int m, n, i;
		scanf("%d%d", &n, &m);
		int brooms[n], k=0;
		for(i=0; i<n; i++){
			int x;
			scanf("%d", &x);
			if(x < 0)
				brooms[k++] = x;
		}
		quicksort(brooms, 0, k-1);
		int count =0;
		if(k >= m){
			for(i=0; i<m; i++){
				if(brooms[i] > 0)
					break;		
				count += brooms[i];
			}
		}
		else {
			for(i=0; i<k; i++){
				if(brooms[i] > 0)
					break;		
				count += brooms[i];
			}
		}
		printf("%d\n", 0-count);
	}
	return 0;
}
