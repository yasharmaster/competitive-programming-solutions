#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <string>
 
#define LOG(x) cerr << "*** " << x << " ***" << endl;
#define wi(x) what_is(x, '\n')
#define wisp(x) what_is(x, ", ")
#define what_is(x, terminator) cerr << #x << " = " << x << terminator;
 
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
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
	int t;
	cin >> t;
	while (t--) {
	    string N;
	    cin >> N;
	    if (DBG){
		    cout << "Checking on number " << N << endl;
	    }
	    int A = 65, Z = 90;
	    for (int i=A; i<=Z; i++) {
	    	char last = '1' + i%10 - 1, first = '1' + i/10 - 1, ch = i;
	    	if (DBG) {
	    		cout << "Searching " << ch << endl;
	    	}
	    	size_t first_found = N.find(first), last_found = N.find(last);
	    	if (first_found == string::npos || last_found == string::npos ) {
	    		if (DBG) {
	    			cout << "Not found"<< endl;
	    		}
	    		continue;
	    	}

	    	if (first_found==last_found) {
	    		last_found = N.find(last, last_found+1);
	    		if (last_found == string::npos) {
	    			continue;
	    		}
	    	}

	    	if (DBG) {
	    		cout << first << " found at " << first_found << " & " << last << " found at " << last_found << endl;
	    	}
	    	cout << ch;
	    }
	    cout << endl;
	}
	return 0;
} 