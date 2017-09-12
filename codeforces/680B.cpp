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


int max(int a, int b){
	return a>b?a:b;
}

int main(){
	fast_io;
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
	int n, pos;
	cin >> n >> pos;
	pos--;
	short A[n];
	REP(i, n) {
		cin >> A[i];
	}
	int max_dist = max(pos, n-pos), can_catch = 0;
	if (A[pos]) {
		can_catch++;
	}
	FOR(dist, 1, max_dist) {
		int cities_at_dist = 0, criminals_at_dist = 0;
		if (pos - dist >= 0){
			cities_at_dist++;
			if (A[pos-dist]) {
				criminals_at_dist++;
			}
		}
		if (pos + dist < n) {
			cities_at_dist++;
			if (A[pos+dist]) {
				criminals_at_dist++;
			}
		}
		if ((criminals_at_dist <= 0) || (cities_at_dist == 2 && criminals_at_dist == 1)){
			continue;
		}
		if (criminals_at_dist == 2 && cities_at_dist == 2) {
			can_catch += 2;
		}
		else if (criminals_at_dist==1 && cities_at_dist == 1) {
			can_catch++;
		}
	}
	cout << can_catch;
	return 0;
} 