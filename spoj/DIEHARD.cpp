#include <cstdio>
#define ll long long

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll h, a;
		scanf("%lld%lld", &h,&a);
		ll count =0, flag=1;

		while(a>0 && h>0){
		//	printf("health = %lld 	armour = %lld\n", h, a);
			if(flag==1){
				h+= 3; a+= 2;
		//		puts("loop 1");
				flag=0;
				count++;
				continue;			
			}
			else{
		//		puts("loop 2");
				if(h-20 > 0){
			//		puts("p 1");
					h-=20; a+=5;
					count++;
					flag=1;
					continue;
				}
				else if(h-5 > 0 && a-10>0){
					h -= 5;	a-=10;
					count++;
			//		puts("p 2");
					flag=1;
					continue;
				}
			//	puts("p 3");
				a=-1; h=-1;
			}
		}
		printf("%lld\n", count);
	}
	return 0;
}
