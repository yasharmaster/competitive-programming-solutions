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

struct yoyo
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};

int string_value(string str, int k){
	vector<int> count(26, 0);
	int size = str.size();
	FOR(i, 0, size){
		count[str[i]-'a']++;
	}
	sort(count.begin(), count.end(), yoyo());
	while(k--){
		if(count[0]>0){
			count[0]--;
			if(count[0]<count[1]){
				sort(count.begin(), count.end(), yoyo());
			}
		}
		else{
			return 0;
		}
	}
	int ans = 0;
	FOR(i, 0, 25){
		ans +=  (count[i]*count[i]);
	}
	return ans;
}

int main(){
	fast_io;
	int t, k, size;
	cin >> t;
	string str;

	while(t--){
		cin >> str;
		cin >> k;
		cout << string_value(str, k) << endl;
	}
	return 0;
}
