#include <stdio.h>
int main()
{
	long long int n, j, hole, value, i, money;
	while(1){
		scanf("%lld", &n);
		if(n == 0)
			break;
		long long int candy[n], students[n];
		for(i=0; i<n; i++){
			scanf("%lld", &students[i]);
		}
		for(i=0; i<n; i++){
			scanf("%lld", &candy[i]);
		}
		for(i=1; i<=n-1; i++){
			value = students[i];
			hole = i;
			while(hole > 0 && students[hole-1] > value ){
				students[hole] = students[hole-1];
				hole--;
			}
			students[hole] = value;
		}
		for(i=1; i<=n-1; i++){
			value = candy[i];
			hole = i;
			while(hole > 0 && candy[hole-1] > value ){
				candy[hole] = candy[hole-1];
				hole--;
			}
			candy[hole] = value;
		}
		money = 0;
		
		for(i=0, j = n-1; i<=n-1, j>=0; j--, i++){
			money += candy[j]*students[i];
		}
		printf("%lld\n", money);
	}
	return 0;
}
