#include <cstdio>
#include <cstring>

using namespace std;

inline int max(int a, int b){
	return (a>b)?a:b;
}

int main(){
	char A[50005], B[50005];
	scanf("%s%s", &A, &B);
	int len1 = strlen(A), len2 = strlen(B);
	int LCS[len1+1][len2+1];
	
	for(int i=0; i<=len1; i++){
		for(int j=0; j<=len2; j++){
			LCS[i][j] = -1;
		}
	}
	
	for(int c = 0; c <= len2; c++){
		LCS[len1][c] = 0;
	}
	
	for(int r = 0; r <= len1; r++){
		LCS[r][len2] = 0;
	}
	
	for(int r = len1-1; r>=0; r--){
		for(int c = len2-1; c>=0; c--){
			if(A[r] == B[c]){
				LCS[r][c] = 1 + LCS[r+1][c+1];
			}
			else{
				LCS[r][c] = max(LCS[r][c+1], LCS[r+1][c]);
			}
		}
	}
	
	printf("%d", LCS[0][0]);
	
	return 0;
}
