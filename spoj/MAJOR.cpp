#include <cstdio>
#include <map>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i;
		map<int, int> data;
		scanf("%d", &n);
		for(i=0; i<n; i++){
			int d;
			scanf("%d", &d);
			data[d]++;
		}
		int size = data.size(), flag=0, ans;
		map<int, int>::iterator ptr;
		for(ptr = data.begin(); ptr != data.end(); ptr++){
			if( (*ptr).second > (n>>1) ){
				flag = 1;
				ans = (*ptr).first;
				break;
			}
		}
		if(flag == 1)
			printf("YES %d\n", ans);
		else
			printf("NO\n");
		}
	return 0;
}
	
		
