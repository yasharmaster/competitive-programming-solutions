#include <stdio.h>
#include <math.h>
int main()
{
	int t, i, j, limit, start, temp;
	unsigned int n;
	scanf("%d", &t);
	while(t--){
		scanf("%u", &n);
		printf("%u\n", 2*n);
		if(n%2 == 0)
		{
			int bits[32];
			for(i=31; i>=0; i--){
				bits[i] = n%2;
				printf("%d ", bits[i]);
				n /= 2;
			}
			j = 0;
			limit = (31 - j)/2;
			while(bits[i] == 0)
				j++;
			start = j;
			for(i = 31; j<=limit; i--, j++){
				temp = bits[i];
				bits[i] = bits[j];
				bits[j] = temp;
			}
			n=0; j=0;
			for(i=31; i>= start; i++){
				n += bits[i]*pow(2, j++);
			}
		}
		printf("%d\n", &n);
	}
	return 0;
}
