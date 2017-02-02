#include<stdio.h>
#include<math.h>
int main()
{
	int t, s;
	float aos, aop;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &s);
		aos = s*s;
		aop = (4/3)*(pow(2,0.5))*(pow(s/2,1.5));
		printf("%.6f\n",aop/aos);
	}
	return 0;
}
