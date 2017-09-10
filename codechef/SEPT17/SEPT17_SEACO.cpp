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
	    vector<ll> I(m, 0), P(m, 0), C(n, 0), T(m), L(m), R(m);
 
	    ll t, l, r;
	    REP(i, m) {
	    	cin >> t >> l >> r;
	    	T[i] = t;
	    	L[i] = l-1;
	    	R[i] = r-1;
	    }
		
		REP(i, m) {
			int inc_index = i, dec_index = i-1;
			if (is_valid_index(inc_index, m)) {
				P[inc_index]++;
			}
			if (is_valid_index(dec_index, m)) {
				P[dec_index]--;
			}
		}
 
		if (DBG) {
			cout << "Printing P vector\n";
			REP(i, m) {
				cout << P[i] << " ";
			}
			cout << endl;
		}
 
		FORD(i, m-1, 0) {
			if(T[i] == 2) {
				int inc_index = R[i], dec_index = L[i]-1;
				if (is_valid_index(inc_index, m)) {
					P[inc_index] += P[i]%MODULO;
				}
				if (is_valid_index(dec_index, m)) {
					P[dec_index] -= P[i]%MODULO;
				}
			}
			else if (T[i] == 1) {
				I[i] = P[i]%MODULO;
			}
			if (i-1 >= 0) {
				P[i-1] += P[i]%MODULO;
			}
		}
 
		if (DBG) {
			cout << "Printing I vector\n";
			REP(i, m) {
				cout << I[i] << " ";
			}
			cout << endl;
		}
 
		REP(i,m) {
			if (T[i] == 1) {
				int inc_index = L[i], dec_index = R[i]+1;
				if (is_valid_index(inc_index, n)) {
					C[inc_index] += I[i]%MODULO;
				}
				if (is_valid_index(dec_index, n)) {
					C[dec_index] -= I[i]%MODULO;
				}
			}
		}
 
		REP(i, n) {
			if (i-1 >= 0){
				C[i] += C[i-1]%MODULO;
			}
		}
		
		REP(i, n) {
			cout << C[i] << " ";
		}
		cout << endl;
	}
	return 0;
} 