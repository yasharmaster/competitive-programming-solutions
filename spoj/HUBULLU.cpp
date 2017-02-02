#include<cstdio>
#define ll long long
using namespace std;
int main(){
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll a,b;
		scanf("%lld%lld",&a,&b);
		if(b==0){
			printf("Airborne wins.\n");
			continue;
		}
		printf("Pagfloyd wins.\n");
	}
	return 0;	
}
