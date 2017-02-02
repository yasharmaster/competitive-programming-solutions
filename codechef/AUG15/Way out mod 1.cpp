#include <cstdio>
#include <climits>
using namespace std;

inline void fastRead(int *a)
{
	register char c=0;
	while (c<33)
		c=getchar_unlocked();
	*a=0;
	while (c>33)
	{
		*a=*a*10+c-'0';
		c=getchar_unlocked();
	}
}

int func(){
	int n, h;
	fastRead(&n); fastRead(&h);
	int i, start, end, j, k;
	int cave[n][n];
	for(i=0; i<n;i++)
		for(j=0; j<n; j++)
			cave[i][j] = 1;

	for(i=0; i<n; i++){
		fastRead(&start); fastRead(&end);
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
