#include <stdio.h>
int main()
{
	int t, m, n, d, i, count;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d", &n,&m,&d);
		int health[n];
		for(i=0; i<n; i++){
			scanf("%d", &health[i]);
		}
		count = 0;
		for(i=0; i<=n-1; i++){
			while(health[i] - d >= 1){
				count++;
				health[i] -= d;
			}
		}
		if(count >= m)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
