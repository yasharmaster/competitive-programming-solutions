#include<stdio.h>
int main()
{
	int t, h, n, cycles;
	scanf("%d", &t);
	while(t--) {
		
		scanf("%d", &n);
		
		cycles = 0;
		h = 1;
		
		while(cycles < n) {
			/*spring*/
			h *= 2;
			cycles++;
			if (cycles==n)
				break;
			/*summer*/
			h += 1;
			cycles++;
			if (cycles==n)
				break;
		}
		printf("%d\n", h);
	
	
	}
	
	
	return 0;
}
	
