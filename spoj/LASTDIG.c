#include <stdio.h>
int main()
{
	int t, a, b, i, p;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &a, &b);
		i=0;p=1;
		while(i<b){
			p=p*a;
			p=p%10;
			i++;
		}
		printf("%d\n", p);
	}
	return 0;
}
