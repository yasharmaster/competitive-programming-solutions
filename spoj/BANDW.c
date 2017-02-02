#include <stdio.h>
int main()
{
	int count, i;
	char init[501], final[501];
	while(1){
		scanf("%s%s", &init, &final);
		if(init[0] == '*' && final[0] == '*')
			break;
		count = 0, i = 0;
		while(init[i]){
			if(init[i] != final[i]){
				count++;
				while(init[i] != final[i])
					i++;
			}
			else
				i++;
		}
		printf("%d\n", count);
	}
	return 0;
}
