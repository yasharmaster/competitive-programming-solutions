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

int find_lcs_length(string &A, int lenA, string &B, int lenB) {
    int dp[lenA+1][lenB+1];
    for (int i=0; i<=lenA; i++) {
        for (int j=0; j<=lenB; j++) {
            dp[i][j] = 0;
        }
    }
    
    for (int i=lenA-1; i>=0; i--) {
        for (int j=lenB-1; j>=0; j--) {
            if (A[i] == B[j]) {
                dp[i][j] = 1 + dp[i+1][j+1];
            }
            else {
                dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }
    return dp[0][0];
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
	    int lenA, lenB;
	    cin >> lenA >> lenB;
	    string A, B;
	    cin >> A >> B;
	    cout << find_lcs_length(A, lenA, B, lenB) << endl;
	}
	return 0;
}