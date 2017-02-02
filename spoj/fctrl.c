#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int n, count;
	while(t--){
		scanf("%d", &n);
		count=0;
		while(n/5 > 0){
			n = n/5;
			count = count + n;
		}
		printf("%d\n", count);
	}
	return 0;
}
