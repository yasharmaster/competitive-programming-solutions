#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
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

char to_lower_case(char ch) {
	if (ch >= 'A' && ch <= 'Z') {
		return ch + 'z' - 'Z';
	}
	return ch;
}

int compare(string &A, string &B) {
	transform(A.begin(), A.end(), A.begin(), to_lower_case);
	transform(B.begin(), B.end(), B.begin(), to_lower_case);
	// cout << A << endl << B;
	int n = A.size();
	REP(i, n) {
		if (A[i] > B[i]) {
			return 1;
		} else if (A[i] < B[i]){
			return -1;
		}		
	}
	return 0;
}

int main(){
	fast_io;
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
	
	string A, B;
	cin >> A >> B;
	cout << compare(A, B);

	return 0;
}