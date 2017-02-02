#include<stdio.h>
#include<math.h>
long long int reverse(long long int n)
{
	long long int p=n;
	long long int count=0;
	while(n !=0){
		n /= 10;
		count++;		
	}
	long long int num=0;
	long long int i;
	for(i=count; i>0; i--)
	{
		num += (p%10)*(pow(10,i-1));
		p /= 10;	
	}
	return num;
}
int main()
{
	long long int t;
	long long int a,b;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld%lld", &a, &b);
		a = reverse(a) + reverse(b);
		printf("%lld\n", reverse(a));	
	}
	return 0;
}

