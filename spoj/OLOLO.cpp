#include <cstdio>
#define llu unsigned long long

using namespace std;

int main()
{
	llu t, ans = 0;
	scanf("%llu", &t);
	while(t--){
		llu temp;
		scanf("%llu", &temp);
		ans = ~( (ans & temp) | (~ans & ~temp) );
	}
	printf("%llu", ans);
	return 0;
}
