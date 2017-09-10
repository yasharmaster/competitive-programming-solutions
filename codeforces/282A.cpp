#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
#include <set>

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
	
	int n;
	cin >> n;
	int x = 0;
	string A;
	while (n--) {
		wi(x)
		cin >> A;
		wi(A)
		if (A.size() == 3 && A[0] == '+' && A[1] == '+' && A[2] == 'X') {
			x++;
			LOG("inc")
		}
		else if (A.size() == 3 && A[0] == '-' && A[1] == '-' && A[2] == 'X') {
			x--;
			LOG("dec")
		}
	}
	cout << x;
	return 0;
}