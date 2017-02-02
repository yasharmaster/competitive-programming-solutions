#include <stdio.h>
int main()
{
	float f, cards, n, length;
	int ans;
	while(1){
		scanf("%f", &f);
		if(f== 0.00)
			break;
		n = 1;
		length = 0;
		while(1){
			length += 1/(1+n);
			if (length >= f)
				break;
			n++;
		}
		ans = n;
		printf("%d card(s)\n", ans);
	}
	return 0;
}
