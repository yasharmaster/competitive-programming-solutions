#include <stdio.h>
int main() {

    int t, a, b, c, n, i, stone;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d", &n,&a,&b);
        if(a<b){
            for(i=0; i<=n-1; i++){
                printf("%d ", (n-1-i)*a + i*b);
            }
        }
        else if(a>b){
            for(i=0; i<=n-1; i++){
                printf("%d ", (n-1-i)*b + i*a);
            }       
        }
        else if(a==b){
        	printf("%d", (n-1)*a);
		}
        printf("\n");
    }
    return 0;
}
