#include <stdio.h>
int main()
{
	int t, s, f, i, j, count, temp, p=1;
	scanf("%d", &t);
	while(p<=t){
		count = 0;
		scanf("%d%d", &s, &f);
		int stamps[f];
		for(i=0;i<f;i++){
			scanf("%d", &stamps[i]);
		}
		for(i=0; i<f-1;i++){
			for(j=i+1;j<f; j++){
				if(stamps[i] < stamps[j]){
					temp = stamps[i];
					stamps[i] = stamps[j];
					stamps[j] = temp;
				}
			}
		}
		for(i=0;i<f; i++){
			count += stamps[i];
			if(count >= s)
				break;
		}
		printf("Scenario #%d:\n", p);
		if(count < s)
			printf("impossible\n");
		else
			printf("%d\n", i+1);
		p++;
	}
		return 0;
}
