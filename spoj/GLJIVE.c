#include <stdio.h>
int main()
{
	int pts[10], sum=0, i;
	for(i=0; i<10; i++){
		scanf("%d", &pts[i]);
	}
	i=0;
	while(sum + pts[i] <100 && i<10){
		sum += pts[i];
		i++;
	}
	if(sum + pts[i] - 100 <= 100 - sum && i <10)
		sum += pts[i];
	printf("%d", sum);
	return 0;
}
