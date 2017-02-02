#include <stdio.h>
int gcd(int a, int b)
{
	int divd = (a>b) ? a : b;
	int divr = (b<a) ? b : a;
	while(divr != 0){
		int rem = divd%divr;
		divd = divr;
		divr = rem;
	}
	return divd;
}
int main()
{
	int t, a, b, c;
	scanf("%d", &t);
	int count = 0;
	while(count < t){
		count++;
		scanf("%d%d%d", &a,&b,&c);
		if(c%(gcd(a,b)) == 0){
			printf("Case %d: Yes\n", count);
		}
		else{
			printf("Case %d: No\n", count);
		}
	}
	return 0;
}
