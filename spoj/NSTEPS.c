#include<stdio.h>
int main()
{
	int t, x, y;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &x, &y);
		if (y==x){
			if(y%2 == 0){
				printf("%d\n", y*2);
				continue;
			}
			else{
					printf("%d\n", (y+1)*2 - 3);
					continue;
				}
			}	
		else if(x == y + 2){
			if(x%2 ==0){
				printf("%d\n", (x*2) - 2);
				continue;
			}
			else{
				printf("%d\n", (x*2) - 3);
				continue;
			}
		}
		else if ( x != y ) {
			printf("No Number\n");
			continue;
		}
	}
	return 0;
}
