#include <cstdio>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;

int is_prime[1001];
ll  v[1000];

void pre(){
	for(int i=2; i<1001; i++)
		is_prime[i] = 1;
	
	for(int i=4; i<1001; i+=2)	
		is_prime[i] = 0;
	
	for(int i=3; i*i < (1001); i += 2){	
		if(is_prime[i] == 1){
			for(int j = i*i; j < 1001; j += i*2){	
				is_prime[j] = 0;	
			}
		}
	}
	int j=0;
	for(int i=2; i<=1000; i++)
		if(is_prime[i] == 1)
			v[j++] = i;
}

ll euclid_gcd(ll a, ll b){
	while(b !=0){
		ll p = (a>b) ? a :b;
		ll d = (a>b) ? b :a;
		ll rem = p%d;
		return euclid_gcd(d, rem);
	}
}

int main()
{
	ll t, a, b, gcd, i, count, j;
	scanf("%lld", &t);
	pre();
	
	while(t--){
		scanf("%lld%lld", &a, &b);

		gcd = euclid_gcd(a, b);
		if(gcd == 1){
			printf("1\n");
		}
		else{
			ll i = 0, ans = 1;
			ll temp = gcd;
			ll sqt = sqrt(gcd);
			
			for(i=0; v[i] <= sqt; i++){
				if(gcd % v[i] == 0)
				{
					count = 0;
					while(gcd%v[i] == 0)
					{
						if(gcd == 0)
							break;
						gcd /= v[i];
						count++;
					}
					ans *= (count+1);
				}
			}
			count=0;
			while(gcd%temp == 0)
			{
				if(gcd == 0)
					break;
				gcd /= temp;
				count++;
			}
			ans *= (count+1);
			printf("%lld\n", ans);
		}
	}
	return 0;
}
