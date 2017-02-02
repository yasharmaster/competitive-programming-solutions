#include <cstdio>
#define ll long long

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n, i;
		scanf("%lld", &n);
		ll temp = 1, count=1;
		while(n - (temp<<1)  > 0){
			temp = temp << 1;
			n -= temp;
			count++;
		}
		char ans[count+1];
		n -= 1;
		for(i=1; i <=count; i++){
			if(n&1)
				ans[count-i] = '6';
			else
				ans[count-i] = '5';
			n = n >> 1;
		}
		ans[count] = '\0';
		printf("%s\n", ans);
	}
	return 0;
}
