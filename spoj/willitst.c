#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld", &n);
	int count = 0;
	while(n>1){
		if(n%2==0){
			n /= 2;
		}
		else{
			n= 3*n + 3;
			count  = 1;
			break;
		}
	}
	if(count==1){
		printf("FIE");
	}
	else{
		printf("TAK");
	}
	return 0;
}
