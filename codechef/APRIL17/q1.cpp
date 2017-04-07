#include <bits/stdc++.h>


#define DBG false
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;

int main(){
	fast_io;
	if(DBG){
		cout << "HelloWorld!";
	}
	
	int t;
	cin >> t;
	while(t--){
		set<string> myset;
		for(int i=0; i<4; i++){
			string temp;
			cin >> temp;
			myset.insert(temp);
		}
		int count = 0;
		for(int i=0; i<4; i++){
			string temp;
			cin >> temp;
			if(myset.find(temp) != myset.end()){
				count++;
			}
		}
		if(count >= 2){
			cout << "similar\n";
		}
		else{
			cout << "dissimilar\n";
		}
	}
	
	return 0;
}