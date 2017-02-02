#include <stdio.h>
int check[50];
int repeat(int n, int upto)
{
	if(upto == 0)
		return 0;
	int i;
	for(i=0; i<= upto; i++){
		if(check[i] == n)
			return 1;
	}
	return 0;
}
int square_sum(int n)
{
	int sum = 0, x;
	while(n>9){
		x = n%10;
		sum += x*x;
		n /= 10;
	}
	sum += n*n;
	return sum;
}
int main()
{
	int n, count=0, flag = -1;
	scanf("%d",&n);
	check[count] = n;
	while(n != 1){
		count++;
		n = square_sum(n);
		if(n == 1){
			flag = -1;
			break;
		}
		if(repeat(n, count)){
			flag = 666;
			break;
		}
		check[count] = n;
	}
	if(flag == 666){
		printf("-1");
	}
	else if(flag == -1){
		printf("%d", count);
	}	
	return 0;
}
