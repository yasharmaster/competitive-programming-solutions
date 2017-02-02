#include <cstdio>
#include <cmath>
#include <cstring>
#define ll long long

using namespace std;

ll extract_number(char str[]){
	ll n = (str[0]-48)*10 + str[1]-48;
	ll t = str[3] - 48;
	while(t--)
		n *= 10;
	return n;
}



int main(){
	char str[10];
	while(1){
		scanf("%s", &str);
		if(strcmp(str, "00e0")==0)
			break;
		ll i, j, temp, n = extract_number(str);
		if( n==1){
			printf("1\n");
			continue;
		}
		temp = n;
		ll size = ceil(log2(n));
		ll A[size], B[size];
		for(i=0; i<size; i++){
			A[i] = temp%2;
			temp /= 2;
		}
		ll last = A[size-1];
		for(i=0; i<size-1; i++)
			B[i+1] = A[i];
		B[0] = last;
		ll ans=0;
		for(i=0; i<size; i++)
			if(B[i]==1)
				ans += pow(2, i);
		printf("%lld\n", ans);	
		
	}
	
	return 0;
}
