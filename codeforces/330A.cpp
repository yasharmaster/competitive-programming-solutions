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
	
	int r, c, straw=0;
	cin >> r >> c;
	vector<int> straw_rows, straw_cols;

	int A[r][c];
	REP(i, r) {
		REP(j, c) {
			A[i][j] = 0;
		}
	}

	set<int> wasted_rows, wasted_cols;

	REP(row, r) {
		string str;
		cin >> str;
		REP(col, c) {
			if (str[col]=='S') {
				straw++;
				wasted_rows.insert(row);
				wasted_cols.insert(col);
			}
		}
	}
	set<int>::iterator itr;
	for (itr=wasted_rows.begin(); itr!= wasted_rows.end(); itr++) {
		int row = *itr;
		REP(i, c) {
			A[row][i]++;
		}
	}
	for (itr=wasted_cols.begin(); itr!= wasted_cols.end(); itr++) {
		int col = *itr;
		REP (i, r){
			A[i][col]++;
		}
	}

	int count = 0;
	REP(i, r) {
		REP(j, c) {
			if (A[i][j] < 2) {
				count++;
			}
		}
	}
	wi(count)
	wi(straw)
	cout << count;
	
	return 0;
}