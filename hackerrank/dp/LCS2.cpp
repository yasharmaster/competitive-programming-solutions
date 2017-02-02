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
		C[r][0] = 0;
	}
	for(int c=0; c<=m; c++){
		C[0][c] = 0;
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(A[i-1] == B[j-1]){
				C[i][j] = 1 + C[i-1][j-1];
			}
			else{
				C[i][j] = max(C[i-1][j], C[i][j-1]);
			}
		}
	}
	int ans = C[n][m];
/*	printf("%d\n\n", ans);
	
	for(int i=0; i<=n; i++){
		for(int j=0; j<=m; j++){
			printf("%d ", C[i][j]);
		}
		puts("");
	}
	*/
	int backtrack[ans];
	int k = ans-1;
	int i=n, j=m;
	while( i > 0 && j  > 0){
		if(A[i-1] == B[j-1]){
			backtrack[k--] = A[i-1];
		//	printf("%d added \n", A[i-1]);
			i -= 1;
			j -= 1;
		}
		else if(C[i][j-1] < C[i-1][j]){
			i -=1;
			if(i==0){
				break;
			}
		}
		else{
			j-=1;
			if(j ==0){
				break;
			}
		}
	}
	for(int i=0; i<C[n][m]; i++){
		printf("%d ", backtrack[i]);
	}
	
	
	return 0;
}
