#include <stdio.h>
int main()
{
	int n, k, j, i, max;
	scanf("%d", &n);
	int num[n];
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	scanf("%d", &k);
	for(i=0; i<=n-k; i++){
		max = num[i];
		for(j=i+1; j<i+k; j++){
			if(num[j] > max)
				max = num[j];
		}
		printf("%d ", max);
	}
	return 0;
}
