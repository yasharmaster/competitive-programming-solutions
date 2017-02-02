#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int t = -1;
int stack[100];
void push(int x)
{
	stack[++t] = x;
}
int isEmpty()
{
	if(t == -1)
		return 1;
	return 0;
}
void pop()
{
	--t;
}
int main()
{
	int test_case;
	scanf("%d", &test_case);
	while(test_case--){
		char exp[200], symbol;
		int i=0, count=0, values[150];
		scanf(" %[^\n]s", exp);
		while(i<strlen(exp)-2){
			symbol = exp[i];
			if(symbol >= '0' && symbol <= '9'){
				values[count++] = atoi(exp+i);
				while(exp[i] != ' ')
					i++;
			}
			i++;
		}
		for(i=0; i<count-1; i++){
			printf("%d ", values[i]);
			while(!isEmpty() && stack[t]<=values[i]+values[i+1]){
				pop();
				printf("+ ");
			}
			push(values[i]+values[i+1]);
		}
		printf("%d ", values[count-1]);
		while(!isEmpty()){
			pop();
			printf("+ ");
		}
		printf("\n");
	}
	return 0;
}
