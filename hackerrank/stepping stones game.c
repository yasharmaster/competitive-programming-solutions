#include <stdio.h>
int main() {
    int t;
    long long int i, dest, add;
    scanf("%d", &t);
    int pos;
    while(t--){
        scanf("%lld", &dest);
        pos = 0;
        i=0, add=1;
        while(pos < dest ){
            i++;
            pos += add++;
        }
        if(pos == dest){
            printf("Go On Bob %lld\n", i);
        }
        else {
            printf("Better Luck Next Time\n");
        }
    }
    return 0;
}

