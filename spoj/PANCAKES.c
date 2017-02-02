#include <stdio.h>
int main()
{
	int n, r, t, flag;
	while(1){
		scanf("%d%d", &n, &r);
		if(n==0 && r == 0)
			break;
		float pancakes[r+1][n], min[r]={0};
		for(i=0; i<=r; i++){
			for(j=0; i<n; j++){
				scanf("%d", &pancakes[i][j]);
			}
		}
		for(i=1; i<=r; i++ ){
			min[i-1] = pancakes[0][0]/pancakes[i][0];
			for(j=0; j<n; j++){
				if(pancakes[0][j]/pancakes[i][j] < min[i-1]){
					min[i-1] = pancakes[0][j]/pancakes[i][j];
				}
			}
		}
		t = min[0];
		flag = 0;
		for(i=0; i<r; i++){
			if(min[i] > t)
				flag = i;
		}
		printf("%d\n", i+1);
	}
	return 0;
}
