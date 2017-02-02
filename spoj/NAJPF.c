#include <stdio.h>
#include <string.h>
int main()
{
	int t, len1, len2, i, count, j, k;
	scanf("%d", &t);
	while(t--){
		char A[1000000], B[1000000];
		scanf("%s %s", &A, &B);
		printf("%s\n%s\n",A,B);
		len1 = strlen(A);
		len2 = strlen(B);
		i=0; count = 0; j=0;
		int ans[1000000];
		while(i<(len1 - len2)){
			for (k= i; k <= i + len2 - 1; k++){
				for(j=0; j<len2; j++){
					if(A[k] != B[j])
						break;
					if (j== len2 - 1){
						ans[count++] = i;
					}
				}
			}
			i++;
		}
		printf("%d\n", count + 1);
		for(i=0; i<count; i++){
			printf("%d ", ans[i]+1);
		}
		printf("\n\n");
	}
		return 0;
}
