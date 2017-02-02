#include <stdio.h>
#include <string.h>


int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		char L1[2][200001], L2[200001];
		scanf("%s\n%s", &L1, &L2);
		int len = strlen(L1);
		if(L1[0] == '#' && L2[0] == '#'){
			printf("No\n");
			continue;
		}
	//	char* ptr1, ptr2, temp;
		ptr2 = L1;
		printf("%s", ptr1);
	}
	return 0;
}
