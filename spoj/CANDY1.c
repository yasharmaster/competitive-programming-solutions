#include <stdio.h>
#include <math.h>
int main()
{
	int n, i;
	long int sum;
	int mean, poxer;
	while(1){
		scanf("%d",&n);
		if(n==-1)
			break;
			
		int candies[n];
		
		sum = 0;
		poxer =0;
		
		for(i=0;i<n;i++){
			scanf("%d",&candies[i]);
			sum += candies[i];
		}
		
		if(sum%n != 0){
			printf("-1\n");
		}
		else {
			mean = sum/n;
			for(i=0;i<n; i++){
				poxer += abs(candies[i] - mean);
			}
			poxer /= 2;
			printf("%d\n", poxer);
		}
	}
	return 0;
}
