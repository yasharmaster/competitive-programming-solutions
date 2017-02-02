#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		char str[100001];
		scanf("%s", &str);
		int len = strlen(str);
		int i=0, j=len-1;
		int flag=0;
		while(i < j){
			if(str[i] == str[j]){
				char a = str[i];
				while(str[i] == a)
					i++;
				while(str[j] == a)
					j--;
				
			}
			else{
				flag =1;
				break;
			}
		}
		if(flag==1)
			puts("NO");
		else
			puts("YES");
	}
	return 0;
}
