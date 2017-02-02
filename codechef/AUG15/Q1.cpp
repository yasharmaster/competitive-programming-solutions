#include <cstdio>
#include <cmath>
#define llu unsigned long long
using namespace std;

llu function(llu ini, llu fin){
	if(ini == fin)
		return 0;
	llu temp = ini, count=0, max_bit=0, i;
	if(ini < fin){
		while(temp > 1){
			count++;
			if(temp&1)
				max_bit = count;
			temp = temp >>1;
		}
		temp = max_bit;
		while(temp>0){
			ini = ini >> 1;	
			temp--;
		}
		count=max_bit;
		while(ini < fin){
			ini = ini << 1;
			count++;
		}
		return count;
	}
	if(ini > fin){
		while(temp > 1){
			count++;
			if(temp&1)
				max_bit = count;
			temp = temp >>1;
			if(temp == fin)
				return count;
		}
		if(max_bit==0){
			while(ini > fin){
				ini = ini >> 1;
				count++;
			}
			return count;
		}
		count=max_bit;
		while(max_bit--){
			ini = ini >> 1;			
		}
		while(ini < fin){
			ini = ini <<1;
			count++;
		}
		while(ini > fin){
			ini = ini >> 1;
			count++;
		}
		return count;
	}
}

int main()
{
	llu t, initial, final, count;
	scanf("%llu", &t);
	while(t--){
		scanf("%llu%llu", &initial, &final);
		count=function(initial, final);
		printf("%llu\n", count);
	}
	return 0;
}
