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

void print_leaders(int *A, int n) {
	int max = INT_MIN;

	bool ans[n];

	for (int i=n-1; i>=0; i--) {
		ans[i] = false;
		if (max < A[i]) {
			ans[i] = true;
			if (max < A[i]) {
				max = A[i];
			}
		}
	}

	for (int i=0; i<n; i++) {
		if (ans[i]) {
			cout << A[i] << " ";
		}
	}
	cout << endl;
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
	    print_leaders(A, n);
	}
	return 0;
}