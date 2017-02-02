#include <stdio.h>
#include <math.h>
int main()
{
	int t, a, b, count, i, sq;
	scanf("%d",&t);
	while(t--){
		count = 0;
		scanf("%d%d",&a,&b);
		i = 1;
		while(i*i <= b){
			if (i*i >= a){
				count++;
			}
			i++;
		}
		printf("%d\n",count);
	}
	return 0;
}	
