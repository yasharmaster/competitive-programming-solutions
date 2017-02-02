#include <stdio.h>
int dig_even(int n)
{
	int dig;
	while(n/10 != 0){
		dig = n%10;
		if(dig%2 == 0)
			return 1;
		n /= 10;
	}
	if (n%2 == 0)
		return 1;
	return 0;
}
int main()
{
	int t, l, m, count, i;
	scanf("%d", &t);
	while(t--){
		count = 0;
		scanf("%d%d", &l, &m);
		for(i = l; i<=m; i++){
			if(dig_even(i))
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
