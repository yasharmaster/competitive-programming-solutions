#include <stdio.h>
int main()
{
	int a, b, i, j, m;
	scanf("%d%d", &a, &b);
	int t=0;
	for(i=a; i<=b; i++){
		for(j=i; j<=b; j++){
			m=i^j;
			if(m>t){
				t=m;
			}
		}
	}
	printf("%d", t);
	return 0;
}
