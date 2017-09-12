#include <bits/stdc++.h>
 
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
typedef vector<ll> vi;
typedef vector<vector<ll> > vvi;
typedef vector<pair<ll, ll> > VPII;


int main(){
	fast_io;
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
	ll n;
	cin >> n;
	ll A[n+1];
	A[0] = 0;
	FOR(i, 1, n){
		cin >> A[i];
	}
	ll money = 0, energy = 0;
	REP(i, n) {
		if (DBG) {
			cout << "Moving from " << i << " to " << i+1 << endl;
		}
		int step_energy = A[i]-A[i+1];

		if (step_energy+energy >= 0) {
			energy += step_energy;
		}
		else {
			money += abs(energy+step_energy);
			energy = 0;
		}
	}
	cout << money;
	return 0;
} 