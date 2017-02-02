#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, i, j;
		scanf("%d", &n);
		long long int array[n][2];
		for(i=0; i<n; i++) {
			scanf("%lld%lld", &array[i][0], &array[i][1]);
		}
		int flag=0, index = -1;
		for(i=0; i<n; i++) {
			flag =0;
			for(j=0; j<n; j++) {
				if (array[i][0] <= array[j][1] && i != j) {
					break;
				}
				else {
					flag++;
				}
			}
			if (flag == n) {
				index = i+1;
			}
		}
		printf("%d\n", index);
	}
	return 0;
}
