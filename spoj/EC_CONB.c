#include <stdio.h>
#include <math.h>
unsigned int bit(unsigned int n)
{
	long int count;
	unsigned int t = n, m = 1;
	while(1){
		t = t/2;
		count++;
		if(n==0)
			break;
	}
	while(count--){
		n = n^m;
		m<<1;
	}
	return n;
}
int main()
{
	unsigned int n;
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("%u", &n);
		if(n%2 == 0)
			printf("%u\n", bit(n));
		else
			printf("%u\n", n);
	}
	return 0;
}
