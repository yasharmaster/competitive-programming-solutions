#include <cstdio>
#include <algorithm>
#include <deque>
#include <stack>

using namespace std;

int main()
{
	while(1){
		int n, i;
		scanf("%d", &n);
		if(n==0)
			break;
		
		deque<int> D;
		
		for(i=0; i<n; i++){
			int temp;
			scanf("%d", &temp);
			D.push_front(temp);
		}
		
		stack<int> S;
		vector<int> V;
		
		while(!D.empty()){
			int a = D.pop_front();
			if(D.empty()){
				V.push_back(a);
				break;
			}
			int b = D.pop_front();
			if(a <= b){
				V.push_back(a);
				D.push_front(b);
				continue;
			}
			D.push_front(b);
			int temp 
			
		}
	}
	return 0;
}
