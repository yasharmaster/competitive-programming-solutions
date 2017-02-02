#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d", &t);
	int n, f, i;
//	long double pi = 3.14159265358979323846264338327950;
	double vol;
	while(t--) {
		vol = 0;
		scanf("%d%d", &n, &f);
		int radii[n];
		for(i=0; i<n; i++){
			scanf("%d", &radii[i]);
		}
		for (i=0; i<n; i++){
			vol += acos(-1) * pow(radii[i], 2);
		}
		vol /= (f+1);
		printf("%.4lf\n", vol);
	}
	return 0;
}
