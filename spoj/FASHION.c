#include<stdio.h>
int main()
{
	int test,i,j,t,n, sum;
	scanf("%d", &test);
	
	while(test--){
		sum=0;
		scanf("%d", &n);
		int man[n], wman[n];
		for(i=0; i<n; i++){
			scanf("%d", &man[i]);
		}
		for(i=0; i<n; i++){
			scanf("%d", &wman[i]);
		}
		for(i=0; i<n-1; i++){
			for(j=i+1; j<n; j++){
				if(man[i] > man[j]){
					t = man[j];
					man[j] = man[i];
					man[i] = t;
				}
			}
		}
		for(i=0; i<n-1; i++){
			for(j=i+1; j<n; j++){
				if(wman[i] > wman[j]){
					t = wman[j];
					wman[j] = wman[i];
					wman[i] = t;
				}
			}
		}
		for(i=0; i<n; i++){
			sum += man[i] * wman[i];
		}
		printf("%d\n", sum);
	
	}
	return 0;
}
