#include <cstdio>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
		
	while(n--){
		int a, b, r;
		scanf("%d%d", &a, &b);
		
		if(a == 0 && b != 0)
			r=0;
		else if(b == 0)
			r=1;
		else{
			int digits[4];	
			digits[0] = (a)%10;
			digits[1] = (a*digits[0])%10;
			digits[2] = (a*digits[1])%10;
			digits[3] = (a*digits[2])%10;
			
			switch(b%4){
				case 0:
					r=digits[3];
					break;
				case 1:
					r=digits[0];
					break;
				case 2:
					r= digits[1];
					break;
				case 3:
					r=  digits[2];
					break;				
			}
		}
		printf("%d\n",r);
	}
	return 0;
}
