#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	while(1){
		char str[26];
		scanf("%s", str);
		if(str[0] == ".")
			break;
		printf("%d", strlen(str));
	}
	return 0;
}
