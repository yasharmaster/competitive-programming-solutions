#include <iostream>
#include <set>
#include <string>

#define DBG true
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0); cin.tie(NULL)

typedef long long ll;

using namespace std;
int main(){
	fast_io;
	int n, m, c=0;
	cin >> n >> m;
	set<string> s1;
	string str;
	REP(i, n){
		cin >> str;
		s1.insert(str);
	}
	REP(i, m){
		cin >> str;
		if(s1.find(str) != s1.end()){
			c++;
		}
	}
	if(c&1){
		if(n>=m)
			cout << "YES";
		else
			cout << "NO";
	}
	else{
		if(n>m)
			cout << "YES";
		else
			cout << "NO";
	}
	return 0;
}
