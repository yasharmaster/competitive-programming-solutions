#include <stdio.h>
#include <math.h>
int main()
{
	float f;
	while(1){
		scanf("%f", &f);
		if(f==0)
			break;
		f = (f*f)/(2*acos(-1));
		printf("%.2f\n", f);
	}
	return 0;
}
