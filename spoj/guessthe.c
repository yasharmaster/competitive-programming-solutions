#include <stdio.h>
#include <string.h>
long long int lcm(long long int a, long long int b)
{
	long long int divd = (b>a) ? b : a, divr = (a<b) ? a : b, rem;
	while(divr != 0 ) {
		rem = divd % divr;
		divd = divr;
		divr = rem;
	}
	return (b/divd)*a;
}
int main()
{
	char str[30];
	int i;
	long long int n;
	here:
	while(1){
		gets(str);
		if(str[0] == '*' )
			break;
		n=1;
		i=0;
		while(i < strlen(str)){
			if (str[i] == 'Y'){
				n = lcm(n, i+1);
			}
			i++;
		}
		i=0;
		while(str[i]){
			if(str[i] == 'N' && n%(i+1) ==0){
				printf("-1\n");
				goto here;
			}
			i++;			
		}
		printf("%lld\n",n);
	}
	return 0;
}
		
