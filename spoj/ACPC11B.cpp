#include <cstdio>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i, j;
		scanf("%d", &n);
		int A[n];
		for(i=0; i<n; i++)
			scanf("%d", &A[i]);
		int m;
		scanf("%d", &m);
		int B[m];
		for(i=0; i<m; i++)
			scanf("%d", &B[i]);
		int min = INT_MAX;
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				if(abs(A[i]-B[j]) < min)
					min = abs(A[i]-B[j]);
			}
		}
		printf("%d\n", min);
	}
	return 0;
}
