#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <string>
#include <map>
 
#define LOG(x) cerr << "*** " << x << " ***" << endl;
#define wi(x) what_is(x, '\n')
#define wisp(x) what_is(x, ", ")
#define what_is(x, terminator) cerr << #x << " = " << x << terminator;
 
#define DBG false
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)
#define MODULO 1000000007

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
	int A[n];
	REP(i, n){
		cin >> A[i];
	}
	vector<int> left_decline(n, -1), right_decline(n, -1);

	int i = 1, count = 0, last_index = -1;
	left_decline[0]=0;
	while(i<n) {
		if (A[i] >= A[i-1]) {
			left_decline[i] = 1 + left_decline[i-1];
		} else {
			left_decline[i] = 0;
		}
		i++;
	}

	i = n-2;
	right_decline[n-1] = 0;
	while(i>=0) {
		if (A[i] >= A[i+1]) {
			right_decline[i] = 1 + right_decline[i+1];
		}
		else {
			right_decline[i] = 0;
		}
		i--;
	}

	if (DBG) {
		cout << "Left decline\n";
		REP(i, n){
			cout << left_decline[i] << " ";
		}
		cout << endl;
		REP(i, n){
			cout << right_decline[i] << " ";
		}
		cout << endl;
	}

	int max = INT_MIN, index;
	REP(i, n) {
		if (left_decline[i]+right_decline[i] > max) {
			max = left_decline[i]+right_decline[i];
			index = i;
		}
	}
	cout << max+1;
	return 0;
} 