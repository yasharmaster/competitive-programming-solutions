#include<stdio.h>
int main()
{
    int n, k, amt=0, i, j, temp;
    scanf("%d%d", &n, &k);
    int toys[n];
    for(i=0; i<n; i++){
        scanf("%d", &toys[i]);
    }
    for (i=0;i<n-1;i++){
        for(j=i+1; j<n; j++){
            if(toys[i]>toys[j]){
                temp = toys[i];
                toys[i] = toys[j];
                toys[j] = temp;
            }
        }
    }
    i=0;
    do{
        amt += toys[i];
        i++;
    }while(amt <= k);
    printf("%d", i-1);
    return 0;
}
