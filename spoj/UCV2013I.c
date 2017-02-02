#include<stdio.h>
#include<math.h>
int main()
{
	int r, N;
	double R;
	while(1){
		scanf("%d%d", &r, &N);
		if (r==0 && N==0)
			break;
		R = (r)/sin(acos(-1)/(2*N));
		printf("%.2lf\n", R);
	}
	return 0;
}
