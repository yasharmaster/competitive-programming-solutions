#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int yo[n], j;
	for(j=0; j<n; j++){
		scanf("%d", &yo[j]);
	}
	int temp = yo[n-1];
	int i=n-2;
	while(yo[i] > temp){
		yo[i+1] = yo[i];
		for(j=0; j<n; j++) {
			printf("%d ", yo[j]);
		}
		printf("\n");
		i--;
	}
	yo[i+1] = temp;
	for(j=0; j<n; j++) {
		printf("%d ", yo[j]);
	}
	return 0;
}
