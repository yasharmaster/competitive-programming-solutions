#include <cstdio>
#include <climits>

using namespace std;

inline int max(int x, int y){
	return x>y ? x : y;
}

int main(){
	
	int n, m;
	scanf("%d%d", &n, &m);
	int A[n], B[m];
	for(int i=0; i<n; i++){
		scanf("%d", &A[i]);
	}
	for(int i=0; i<m; i++){
		scanf("%d", &B[i]);
	}
	int C[n+1][m+1];
	for(int r=0; r<=n; r++){
		C[r][m] = 0;
	}
	for(int c=0; c<=m; c++){
		C[n][c] = 0;
	}
	
	for(int r = n-1; r>=0; r--){
		for(int c = m-1; c>=0; c--){
			if(A[r] == B[c]){
				C[r][c] = 1+C[r+1][c+1];
			}
			else{
				C[r][c] = max(C[r+1][c], C[r][c+1]);
			}
		}
	}
	
	for(int i=0; i<=n; i++){
		for(int j=0; j<=m; j++){
			printf("%d ", C[i][j]);
		}
		puts("");
	}
	
	int i=0;
	while(i<n){
		while(C[i][0] == C[i+1][0]){
			i++;
			if(i==n){
				i = INT_MAX;
				break;
			}
		}
		if(i != INT_MAX  && C[i][0] != 0){
			printf("%d ", A[i]);
			i++;
		}
	}
	return 0;
}
