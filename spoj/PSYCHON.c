#include <stdio.h>
#include <math.h>
int isPsycho(int n)
{
	int odd=0, even=0, i, count;
	for(i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			count=0;
			while(n%i ==0 ){
				count++;
				n /= i;
			}
			(count%2)?odd++:even++;
		}
	}
	if(n!=1)
		odd++;
	if (even > odd )
		return 1;
	else 
		return 0;
}

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		if(isPsycho(n))
			puts("Psycho Number\n");
		else
			puts("Ordinary Number\n");
	}
	return 0;
}
