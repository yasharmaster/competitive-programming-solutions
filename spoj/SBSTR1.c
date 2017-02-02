#include<stdio.h>
int main()
{
	int t=2;
	char A[10], B[5];
	int i, j, k, flag;
	while(t--){
		scanf("%s %s", &A, &B);
		for(i=0; i<6; i++){
			j=i;
			k=0;
			flag=0;
			while(k<5){
				if(A[j] != A[k])
					break;
				else
					flag++;
				k++;
				j++;
			}
			if(flag==5){
				printf("1\n");
				break;
			}
		}
		if (flag != 5)
			printf("0\n");
	}
	return 0;
}
