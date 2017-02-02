#include <stdio.h>
#include <math.h>
int isLucky(int n)
{
	int i, count=0;
	for(i=2; i<=n; i++){
		if(n%i == 0){
			count++;
			if(count >= 3)
				return 1;
			while(n%i == 0)
				n = n/i;
		}		
	}
	return 0;
}
int main()
{
	int n, l = 0;
	int lucky[1001];
	for(n=30; l<=1000; n++){
		if(isLucky(n) && n>lucky[l-1])
			lucky[l++] = n;
	}
	int t, index;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&index);
		printf("%d\n", lucky[index-1]);
	}
	return 0;
}
