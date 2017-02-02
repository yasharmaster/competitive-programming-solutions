#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		char str[11];
		scanf("%s", &str);
		int len = 0, i;
		while(str[len] != '\0')
			len++;
	/*	char rev[len+1];
		for(i=0; i<len; i++){
			rev[len-1-i] = str[i];
		}
	*/	int upto=(len/2)-1, flag=0;
		
		for(i=0; i<= upto; i++){
		//	printf("checking %c and %c\n", str[i], str[len-1-i]);
			if(str[i] != str[len-1-i]){
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}
