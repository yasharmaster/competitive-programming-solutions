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
	vector<int> A(3, -1);

	int t = 3;
	while (t--) {
		string s;
		cin >> s;
		char a = s[0]-'A', b = s[2]-'A';
		bool greater = false;
		if (s[1] == '>') {
			greater = true;
		}
		if (A[a] == -1 && A[b] == -1) {
			if (greater) {
				A[a] = 256;
				A[b] = 128;
			}
			else {
				A[a] = 128;
				A[b] == 256;
			}
		}
	}
	return 0;
} 