#include <stdio.h>
#include <math.h>
int main()
{
	long long int t, n, i, sum, ans, scenario=0;
	scanf("%lld",&t);
	char ch;
	while(scenario < t){
		scenario++;
		sum = 0; ans = 0;
		scanf("%lld",&n);
		int coke[n];
		
		for(i=0; i<n; i++){
			scanf("%lld", &coke[i]);
		}
		scanf("%c",&ch);
		
		for(i=0; i<n; i++){
			sum += coke[i];
			if(sum <= 0){
				ans += abs(sum);
				sum = 0;
			}
		}
		printf("Scenario #%lld: %lld\n", scenario, ans+1);
	}
	return 0;
}
