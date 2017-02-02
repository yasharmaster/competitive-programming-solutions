#include <cstdio>
#include <cstring>

#define ll long long

using namespace std;

int DIST[2002][2002];

inline int min(int a, int b)
{
	if(a < b)
		return a;
	return b;	
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		char A[2001], B[2001];
		scanf("%s%s", &A, &B);
		int len1 = strlen(A), len2 = strlen(B);
		memset(DIST, 0, sizeof(DIST[0][0])*len1+1*len2+1);
		int i, j;
		for(i=0; i<=len1; i++)
			DIST[i][0] = i;
		for(j=0; j<=len2; j++)
			DIST[0][j] = j;
		
		for(i=1; i<=len1; i++)
			for(j=1; j<=len2; j++){
				if(A[i-1]==B[j-1])
					DIST[i][j] = DIST[i-1][j-1];
				else
					DIST[i][j] = min(min( DIST[i-1][j] + 1, DIST[i][j-1] + 1), DIST[i-1][j-1]+1);
			}
			
		printf("%d\n", DIST[len1][len2]);
	}	
	return 0;
}

