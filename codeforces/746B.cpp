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

ll find_median(ll n) {
	if (n&1) {
		return n/2 + 1;
	}
	return n/2;
}

int main(){
	fast_io;
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
	int n;
	cin >> n;
	string coded;
	cin >> coded;
	size_t size = n;
	string decoded(size, ' ');

	ll l, r;
	l = r = find_median(n) - 1;

	REP(i, n) {
		char ch = coded[i];
		if (l == r) {
			decoded[l] = ch;
			l--;
			r++;
			continue;
		}
		if (n-r > l+1) {
			decoded[r] = ch;
			r++;
		} else {
			decoded[l] = ch;
			l--;
		}
	}
	cout << decoded;
	return 0;
} 