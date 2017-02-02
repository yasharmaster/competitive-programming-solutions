#include <cstdio>


using namespace std;

int main()
{

	int t;
	scanf("%d", &t);
	
	while(t--){
		int n, k;
		scanf("%d%d", &n, &k);
		char str[n+1];
		scanf("%s", &str);
		getchar();
		int count=0, i, hsb=0;
		while(n-count > k){
			while(str[hsb] == '\0')
				hsb++;
			int flag=0, i=hsb;
			while(i < n){
				if(str[i] == '1'){
					flag=1;
					str[i] = '\0';
					count++;
					
					break;
				}
				i++;
			}
			i=hsb;
			if(flag==0){
				while(i < n){
					if(str[i] == '0'){
						flag=1;
						str[i] = '\0';
						count++;
					
						break;
					}
				}
				i++;
			}
			if(n-count <= k)
				break;
			flag=0, i=hsb;
			while(i < n){
				if(str[i] == '0'){
					flag=1;
					str[i] = '\0';
					count++;
				
					break;
				}
				i++;
			}
			i=0; 
			if(flag==0){
				while(i < n){
					if(str[i] == '1'){
						flag=1;
						str[i] = '\0';
						count++;
				
						break;
					}
					i++;
				}
			}
		}
		if(n==k)
			printf("%s", str);
		else if(n>k){
			for(i=hsb; i<n; i++){
				if(str[i] == '1' || str[i] =='0')
					printf("%c", str[i]);	
			}
		}
		
		printf("\n");
	}
	return 0;
}
