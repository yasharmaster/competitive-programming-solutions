#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	while(1){
		int n;
		scanf("%d", &n);
		if(n == 0)
			break;
		char str[201];
		scanf("%s", &str);
		int len = strlen(str);
		char ans[len+1];
		int i = 0, curr, k=0;
		
		while(i < len){
			curr = i;
			for(; i < curr+n; i++)
				ans[k++] = str[i];
			i -= 1;
			if(i >= len)
				break;
			i += n;
			curr = i;
			for(; i > curr - n; i--)
				ans[k++] = str[i];
			i += (n+1);
		}
		for(i=0; i < n; i++){
			int j = i;
			while(j < len){
				printf("%c", ans[j]);
				j += n;
			}
		}
		puts("\n");
	}
	return 0;
}
