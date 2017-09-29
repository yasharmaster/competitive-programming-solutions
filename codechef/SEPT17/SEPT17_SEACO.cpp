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

struct ModInt {
    int x;
    ModInt(int _x) {
        x = _x % M;
        if (x < 0) x += M;
    }
    ModInt& operator+=(ModInt rhs) {
        x += rhs.x;
        if (x >= M) x -= M;
        return *this;
    }
    ModInt& operator-=(ModInt rhs) {
        x -= rhs.x;
        if (x < 0) x += M;
        return *this;
    }
};

bool is_valid_index(int i,  int m) {
	return i < m && i >= 0;
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
	    ll n, m;
	    cin >> n >> m;
	    vector<ll> Count(m+2, 0), DCount(m+1, 0), C(n+1, 0), T(m+1), L(m+1), R(m+1);
 
	    ll t, l, r;
	    FOR(i, 1, m) {
	    	cin >> t >> l >> r;
	    	T[i] = t;
	    	L[i] = l;
	    	R[i] = r;
	    }
		
		FORD(i, m-1, 0) {
			Count[i] = Count[i+1] + DCount[i];
			if (T[i] == 2) {
				if (is_valid_index(L[i]-1, m)) {
					subtract(DCount[L[i]-1], Count[i]);
				}
				add(DCount[R[i]], Count[i]);
			}
		} 

		if (DBG) {
			REP(i, m) {
				cout << Count[i] << " ";
			}
			cout << endl;
		}

		REP(i, m) {
			if (T[i] == 1) {
				int dec_index = R[i]+1, inc_index = L[i];
				if (is_valid_index(inc_index, n)) {
					add(C[inc_index], Count[i]);
				}
				if (is_valid_index(dec_index, n)) {
					subtract(C[dec_index], Count[i]);
				}
			}
		}

		FOR(i, 1, n-1){
			add(C[i], C[i-1]); 
		}
		
		REP(i, n) {
			cout << C[i] << " ";
		}
		cout << endl;
	}
	return 0;
} 