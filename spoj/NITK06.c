#include <stdio.h>
int main()
{
	int t, count, i;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);

		int nos[n];
		for(i=0; i<n; i++){
			scanf("%d", &nos[i]);
		}
		if(n==1){
			printf("NO\n");
			continue;
		}
		for(i=0; i<=n-2; i++){
			count = 0;
			while(nos[i] - count > 0)
				count++;
			nos[i] -= count;
			nos[i+1] -= count;
			
		}
		if(nos[n-1] != 0){
			printf("NO\n");
		}
		else
			printf("YES\n");
	}
	return 0;
}
