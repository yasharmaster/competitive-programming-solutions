#include <stdio.h>
#include <math.h>
int main()
{
	int t, l, b, area, a, n, max, i;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d", &l, &b);
		area = l * b;
		for (i = sqrt(area); i>=1 ; i--){
			if ( area%(i*i) == 0 && l%i ==0  && b%i == 0 ){
				printf("%d\n", area/(i*i));
				break;
			}
		}
	}
	return 0;
}
