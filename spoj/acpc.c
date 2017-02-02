#include <stdio.h>
int main()
{
	float a, b, c;
	int ans;
	while(1) {
		scanf("%f%f%f", &a, &b, &c);
		if (a==0 && b == 0 && c == 0) {
			return 0;
		}
		if ( 2*b == a + c ){
			ans = c + (b - a);
			printf("AP %d\n", ans );
		}
		else {
			ans = c * (b/a);
			printf("GP %d\n", ans );
		}
	}
	return 0;
}
