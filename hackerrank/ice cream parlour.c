#include <stdio.h>
int main()
{
    int t, n, m, i, j;
    scanf("%d", &t);
    here:
    while(t--){
        scanf("%d%d", &m,&n);
        int price[n];
        for(i=0; i<n; i++){
            scanf("%d", &price[i]);
        }
        for(i=0; i<n-1; i++){
            for(j=i+1; j<n; j++){
                if(price[i] + price[j] == m && i != j){
                    if(i<j){
                        printf("%d %d\n", i+1,j+1);
                        goto here;
                    }
                    else{
                        printf("%d %d\n", j+1, i+1);
                        goto here;
                    }
                }
            }
        }
    }
    return 0;
}
