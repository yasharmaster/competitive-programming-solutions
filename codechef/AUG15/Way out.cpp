#include <cstdio>
#include <climits>
using namespace std;
int func(){
	int n, h;
	scanf("%d%d", &n, &h);
	int i, start, end, j, k;
	int cave[n][n];
	for(i=0; i<n;i++)
		for(j=0; j<n; j++)
			cave[i][j] = 1;

	for(i=0; i<n; i++){
		scanf("%d%d", &start, &end);
		for(j=start; j<=end; j++)
			cave[j][i] = 0;
	}


	int count, ans[n-h];


	for(i=0; i<n-h; i++){
		count=0;
		for(k=i; k<i+h; k++){
			for(j=0; j<n; j++)
				if(cave[k][j] == 1){
					count++;
				}
		}
		ans[i] = count;
	}

	count = INT_MAX;
	for(i=0; i<n-h; i++){
		if(ans[i] < count)
			count = ans[i];
	}
	printf("%d\n", count);
	
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		func();
	}
	return 0;
}
