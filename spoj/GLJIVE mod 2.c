#include <stdio.h>
int main()
{
	int pts[10], i, sum=0;
	for(i=0; i<10; i++){
		scanf("%d", &pts[i]);
	}
	i=0;
	while(sum + pts[i] < 100 && i<10){
		sum += pts[i];
		i++;
	}
	if(i<9 && 100-sum >= sum+pts[i]-100)
		sum+=pts[i];
	
	printf("%d", sum);
	return 0;	
}
