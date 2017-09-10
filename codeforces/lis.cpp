#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <string>

// #define LOGGING // May cause TLE or CE
#ifdef LOGGING
	#define LOG(x) cerr << "*** " << x << " ***" << endl;
	#define wi(x) what_is(x, '\n')
	#define wisp(x) what_is(x, ", ")
	#define what_is(x, terminator) cerr << #x << " = " << x << terminator;
#else
	#define LOG(x)
	#define wi(x)
	#define wisp(x)
	#define what_is(x, terminator)
#endif

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

int max(int a, int b) {
    if (a>b) return a;
    return b;
}

int find_lis_length(int *A, int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	int dp[n];

	for (int i=0; i<n; i++) {
		int max_val = -1;
		for (int j=0; j<i; j++) {
			if (A[i] > A[j]) {
				max_val = max(max_val, dp[j]);
			}
		}

		if (max_val == -1) {
			dp[i] = 1;
		} else {
			dp[i] = 1 + max_val;
		}
	}

	int ans = INT_MIN;
	for (int i=0; i<n; i++) {
		ans = max(dp[i], ans);
	}
	return ans;
}

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
	    int *A = new int[n];
	    for (int i=0; i<n; i++) {
	    	cin >> A[i];
	    }
	    cout << find_lis_length(A, n) << endl;
	}
	return 0;
}