#include<stdio.h>
int main()
{
	int g, b, big, small;
	while(1) {
		scanf("%d%d", &g, &b);
		if(g== -1 && b== -1){
			break;
		}
		if (b==0 && g != 0){
			printf("%d\n", g);
			continue;
		}
		if (g==0 && b !=0 ){
			printf("%d\n", b);
			continue;
		}
		if (g==b){
			printf("1\n");
			continue;
		}
		int ans =0;
		big = b > g ? b : g;
		small = b < g ? b : g;
		while( big >= small ) {
			big = big - (small+1);
			ans++;
		}
		if(big > 0)
			ans++;
		printf("%d\n", ans);
	}
	return 0;
}
