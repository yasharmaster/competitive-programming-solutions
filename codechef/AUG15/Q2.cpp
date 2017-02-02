#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		char str[2][200001];
		scanf("%s\n%s", &str[0], &str[1] );
		int len = strlen(str[0]);
		if(str[0][0] == '#' && str[1][0] == '#'){
			printf("No\n");
			continue;
		}
//		printf("len is %d\n", len);
		int p=0, q=1, temp, count1=0, count2=0,flag1=0, flag2=0, i=0;
		if(str[p][0] == '.'){
	//		puts("executing 1st loop\n");
			while(i != len-1){
		//		printf("i = %d\n", i);
				if(str[p][i+1] == '.')
					i++;
		//		else if(str[p][i+1] == '#' && str[p][i+2] == '.')
		//			i+=2;
				else if(str[q][i+1] == '.'){// || str[q][i]=='.'){
					count1++;
		//			puts("count1 increamented\n");
					temp = p;
					p = q;
					q = temp;
					if(str[p][i+1] == '.')
						i = 1+i;
					else
						i+=0;
				}
				else{
					flag1=1;
					break;
				}
			}
		}
	//	puts("outside 1st loop\n");
	//	printf("i = %d\n", i);
		if(i != len-1){
			
			flag1 =1;
	//		puts("1st block unable to  solve\n");
		}
				
		p=1; q=0; i=0;
		if(str[p][0] == '.' ){
	//		puts("executing 2nd loop\n");
			while(i != len-1){
				if(str[p][i+1] == '.')
					i++;
			//	else if(str[p][i+1] == '#' && str[p][i+2] == '.')
			//		i+=2;
				else if(str[q][i+1] == '.'){// || str[q][i]=='.'){
					count2++;
		//			puts("count2 increamented\n");
					temp = p;
					p = q;
					q = temp;
					if(str[p][i+1] == '.')
						i = 1+i;
					else
						i=i+0;
				}
				else{
					flag2=1;
					break;
				}
			}
		}
	//	puts("helllooo" );
	//	printf("i = %d\n", i);
		if(i != len-1){
			
			flag2 = 1;
	//		puts("2nd block unable to  solve\n");
		}
		
		if(flag1 == 1 && flag2 == 1)
			printf("No\n");
		else{
			if(flag1 == 0 && flag2 == 0){
		//		puts("1st one\n");
				int min = count1 > count2 ? count2 : count1;
				printf("Yes\n%d\n", min);
				continue;
			}
			else if(flag1 == 0){
				printf("Yes\n%d\n", count1); 
		//		puts("2nd one\n");
			}
			else if(flag2 == 0){
		//		puts("3rd one\n");
				printf("Yes\n%d\n", count2);
				
			}
		}
	}
	return 0;
}
