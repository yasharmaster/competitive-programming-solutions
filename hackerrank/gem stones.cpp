#include <stdio.h>
int main()
{
    int n, i, j, k, var=-1;
    scanf("%d", &n);
    char str[n][100];
    for(i=0; i<n; i++){
        scanf("%s", &str[i]);
    }
    int flag[n-1] = {0};
    i=0;
    while(str[1][i]){
   		here:
		for(j=1; j<=n-1; j++){
    		k=0;
    		while(str[j][k]){
    			if(str[1][i] == str[j][k]){
    				flag[j] = 1;
 					goto here;      
				}
				k++;
			}
		}
		i++;
	}
	for(i=0; i<=n-2
}
