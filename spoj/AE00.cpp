#include<cstdio>
#include<cmath>
using namespace std;
int function(int n){
	if(n==0)	
		return 0;
	int count = 0, num = sqrt(n), i;
	for(i = 2; i<=num; i++)
		if(n%i == 0)
			count++;
	return function(n-1) + count + 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", function(n));
	return 0;
}
