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
 
const int MOD = 1000000007;
const int MAXN = 100000;

bool is_valid_index(int i,  int m) {
	return i < m && i >= 0;
}

ll get_sum_of_string(string &N) {
	ll sum = 0;
	REP(i, N.size()) {
		sum += N[i] - '0';
	}
	return sum;
}

ll get_sum(ll n) {
	ll sum = 0;
	while(n > 0) {
		sum += n%10;
		n /= 10;
	}
	return sum;
}
 
int main(){
	fast_io;
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
	string N;
	cin >> N;

	if (N.size() == 1) {
		cout << 0;
	}
	else {
		int count = 1;
		ll n = get_sum_of_string(N);
		while(n > 9) {
			count++;
			n = get_sum(n);
		}
		cout << count;
	}
	return 0;
} 