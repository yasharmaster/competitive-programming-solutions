#include <cstdio>
#include <cmath>

using namespace std;

inline int digsum(int n){
	int sum  = 0;
	while(n > 0){
		sum += n%10;
		n /= 10;
	}
	sum += n;
	return sum;
}

int main()
{
	const int max = 1000000;		//10^6 doesn't work in windows 
	
	int is_devlali_prime[max+1], i, j;
	for(i=2; i<=max; i++)
		is_devlali_prime[i] = 1;
	
	for(i=4; i<=max; i+=2)
		is_devlali_prime[i] = 0;
	
	for(i=3; i <= sqrt(max); i++){
		if(is_devlali_prime[i] == 1){
			for(j = i*i; j <= max; j += i*2){
				is_devlali_prime[j] = 0;	
			}
		}
	}
	
	i = 1;
	while(i + digsum(i) <= max){
		is_devlali_prime[i + digsum(i)] = 0;
		i++;
	}
	
	int count = 0;
	for(i=3; i<=max; i++){
		if(is_devlali_prime[i] == 1){
			count++;
		}
		is_devlali_prime[i] = count;
	}
	
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		if(a == 0)
			printf("%d\n", is_devlali_prime[b] - is_devlali_prime[a]);
		else
			printf("%d\n", is_devlali_prime[b] - is_devlali_prime[a-1]);
	}
	return 0;
}
