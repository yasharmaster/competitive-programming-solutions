#include <stdio.h>
int main()
{
	int a, d, j, i, count;
	here:
	while(1){
		scanf("%d%d", &a, &d);
		if(a==0 && d ==0)
			break;
		int attack[a], defend[d];
		for(i=0; i<a; i++){
			scanf("%d", &attack[i]);
		}
		for(i=0; i<d; i++){
			scanf("%d", &defend[i]);
		}
		for(i=0; i<a; i++){
			count=0;
			for(j=0; j<d; j++){
				if(attack[i] >= defend[j]){
					count++;
					if(count >= 2)
						break;
				}
			}
			if(count != 2){
				printf("Y\n");
				goto here;
			}
		}
		printf("N\n");
	}
	return 0;
}
