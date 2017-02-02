#include <iostream>
#include <set>

#define DBG false
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

typedef long long ll;

using namespace std;

int main(){
	fast_io;
	int n, c=0;
	cin >> n;
	int P[n+1];
	set<int> myset;
	FOR(i, 1, n){
		cin >> P[i];
		if(P[i] == i){
			c++;
		}
		else{
			myset.insert(P[i]);
		}
	}
	cout << c + (myset.size())/2;
	return 0;
}
