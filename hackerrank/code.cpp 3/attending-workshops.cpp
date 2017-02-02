#include<iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
class Workshop{
public:
    int start, duration, finish;
    Workshop(int a, int b, int c){        start = a;        duration = b;        finish = c;    }
    Workshop(){        start=0;    duration=0;     finish=0;    }
};
class Available_Workshops{
public:
    int N;
    vector<Workshop> workshops;
    Available_Workshops(int total_workshops){
        N = total_workshops;
    }
};
bool compare(Workshop a, Workshop b){
	return ((a.finish) < (b.finish));
}
Available_Workshops* initialize(int start_time[], int duration[], int n){
    Available_Workshops* AW = new Available_Workshops(n);
    for(int i=0; i<n; i++){
        Workshop w(start_time[i], duration[i], start_time[i]+duration[i]);
        AW->workshops.push_back(w);
    }
    sort(AW->workshops.begin(),AW->workshops.end(), compare);
    return AW;
}

int CalculateMaxWorkshops(Available_Workshops *AW){
    int ans=0;
    vector<Workshop>::iterator it = AW->workshops.begin();
   
    while(it != AW->workshops.end()){
    	printf("%d %d %d \n", (*it).start, (*it).finish, (*it).duration);
    	it++;
    }
    it = AW->workshops.begin();
    while(it != AW->workshops.end()){
		ans += 1;
		int end_time = (*it).finish;
		it++;
		if(it == AW->workshops.end()){
			break;
		}
		while((*it).start < end_time){
			it++;
			if(it == AW->workshops.end()){
				break;
			}
		}
	}
//	AW->workshops.clear();

    return ans;
}

int main(){
	int n;
	cin>>n;
	int start_time[n], duration[n];
	for(int i=0; i<n; i++){
		cin >> start_time[i];
	}
	for(int i=0; i<n; i++){
		cin>>duration[i];
	}
	Available_Workshops *ptr;
	ptr = initialize(start_time, duration, n);
	cout << CalculateMaxWorkshops(ptr)<<endl;
	return 0;
}
