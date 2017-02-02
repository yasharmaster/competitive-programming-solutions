#include <stdio.h>
#include <math.h>
int isprime(int a)
{
	int i;
	if (a==1)
		return 0;
	for(i=2; i<=sqrt(a);i++){
		if (a%i == 0)
			return 0;
	}
	return 1;
}
int main(void)
{
	int t;
	scanf("%d", &t);
	int a, b;
	register int i;
	while(t--){
		scanf("%d%d", &a, &b);
		for(i=a; i<=b; i++){
			if (isprime(i))
				printf("%d\n", i);
		}
		printf("\n");
	}
	return 0;
}
