#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

class Activity{
public:
	int start, end;
	Activity(){
		start = 0;
		end = 0;
	}
	Activity(int s, int e){
		start = s;
		end = e;
	}
};

bool compare(Activity a, Activity b){
	return ((a.end) < (b.end));
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		vector<Activity> myvector;
		for(int i=0; i<n; i++){
			int x,y;
			scanf("%d%d", &x, &y);
			Activity ac(x,y);
			myvector.push_back(ac);
		}

		sort(myvector.begin(), myvector.end(), compare);
		int ans = 0;
		vector<Activity>:: iterator it = myvector.begin();
		
		while(it != myvector.end()){
			ans += 1;
			int end_time = (*it).end;
			it++;
			while((*it).start < end_time){
				it++;
				if(it == myvector.end()){
					break;
				}
			}
		}
		myvector.clear();
		printf("%d\n", ans);
	}
	
	return 0;
}
