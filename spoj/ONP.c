#include <stdio.h>
#define MAX 500
char stack[MAX];
int t = -1;
void push(char x)
{
	stack[++t] = x;
}
char pop()
{
	return stack[t--];
}
int main()
{
	int t, i;
	scanf("%d",&t);
	char str[400], ch, p;
	while(t--){
		scanf("%s",&str);
		i=0;
		while(str[i]){
			ch = str[i];
			if(ch >= 97 && ch <=122){
				printf("%c", ch);
			}
			else if(ch == '*' || ch == '+' || ch == '-' || ch == '^' || ch == '/' ){
				push(ch);
			}
			else if( ch == '}' || ch == ')' || ch == ']'){
				p = pop();
				printf("%c",p);
			}
			i++;
		}
		printf("\n");
	}
	return 0;
}
