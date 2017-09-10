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
	    int n;
	    cin >> n;
	    int B[100005];
	    int A[n], prefix[n];
	    int total_sum = 0;
	    REP(i, n){
	    	cin >> A[i];
	    	total_sum += A[i];
	    	prefix[i] = total_sum;
	    }
	    int min_sum = INT_MAX, sum, index = 0;
	    REP(i, n){
	    	sum = prefix[i]+total_sum;
	    	if (sum < min_sum) {
	    		min_sum = sum;
	    		index = i;
	    	}
	    	total_sum -= A[i];
	    }
	    cout << index+1 << endl;
	}
	return 0;
}