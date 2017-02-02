#include<stdio.h>
int sum(long long int n)
{
	long long int sm=0;
	while(n/10 != 0){
		sm += n%10;
		n /= 10;
	}
	return sm+n;
}
int main()
{
	int t;
	long long int sm, n;
	scanf("%d", &t);
	while (t--){
		scanf("%lld", &n);
		while(1){
			sm= sum(n);
			if(n%sm==0){
				printf("%lld\n", n);
				break;
			}
			else {
				n++;
			}
		}
	}
	return 0;
}
