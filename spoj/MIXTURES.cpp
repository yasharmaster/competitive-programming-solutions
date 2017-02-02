#include <cstdio>
#include <climits>

using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n) > 0){
		int* colors = new int[n];
		for(int i=0; i<n; i++){
			scanf("%d", &colors[i]);
		}
		int DP[n][n][2];
		
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				 DP[i][j][0] = -1;
				 DP[i][j][1] = -1;
			}
		}
		
		for(int i=0; i<n; i++){
			DP[i][i][0] = 0;						// 0 means smoke
			DP[i][i][1] = colors[i];				// 1 means color
		}
/*		puts("----------SMOKE INIT----------------");
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ", DP[i][j][0]);
			}
			puts("");
		}
		puts("----------COLOR INIT----------------");
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ", DP[i][j][1]);
			}
			puts("");
		}
		puts("--------------------------");		*/
		for(int c=1; c<n; c++){
			for(int r = c-1; r >= 0; r--){
				DP[r][c][0] = INT_MAX;
				for (int k=r; k<c ;k++){
					int temp = DP[r][k][0] + DP[k+1][c][0] + DP[r][k][1]*DP[k+1][c][1];
		//			printf("temp = %d\n", temp);
					if(temp < DP[r][c][0]){
						DP[r][c][0] = temp;
						DP[r][c][1] = (DP[r][k][1]+DP[k+1][c][1])%100;
					}
				}
			}
		}
		
/*		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ", DP[i][j][0]);
			}
			puts("");
		}
		*/
		printf("%d\n", DP[0][n-1][0]);
	}
	return 0;
}
