#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int half=0, one_fourth=0, three_fourth=0;
	while(n--){
		int a, b;
		scanf("%d/%d", &a, &b);
		if(a==3){
			three_fourth++;
			continue;
		}
		if(b==2){
			half++;
			continue;
		}
		one_fourth++;
	}
	
	int result=0;
	
	if(three_fourth <= one_fourth){
		result += three_fourth;
		one_fourth -= three_fourth;
		
		result += half/2;
		half %= 2;
		
		half += one_fourth/2;
		
		result += half/2;
		half %= 2;
		
		one_fourth %= 2;
		
		if(one_fourth > 0 || half > 0)
			result++;
	}
	else if(one_fourth < three_fourth){
		result += one_fourth;
		
		three_fourth -= one_fourth;
		result += three_fourth + half/2 + half%2;
	}
	
	printf("%d", result+1);
	return 0;
}
