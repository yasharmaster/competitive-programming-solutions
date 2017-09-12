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
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<pair<ll, ll> > VPII;


int main(){
	fast_io;
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
	ll n, m;
	cin >> n >> m;
	VPII matches(m);
	ll temp;
	REP(i, m) {
		cin >> temp;
		matches[i].second = temp;
		cin >> temp;
		matches[i].first = temp;
	}

	sort(matches.begin(), matches.end());

	ll matchboxes_count = 0, matches_count = 0, i = m-1;
	while(matchboxes_count < n) {
		if (i < 0) {
			break;
		}
		int num_of_matchboxes = matches[i].second, num_of_matches = matches[i].first;
		if (num_of_matchboxes + matchboxes_count <= n) {
			matchboxes_count += num_of_matchboxes;
			matches_count += num_of_matchboxes*num_of_matches;
		}
		else {
			int x = 0;
			while (x + matchboxes_count <= n) {
				x++;
			}
			matchboxes_count += x-1;
			matches_count += num_of_matches*(x-1);
		}
		i--;
	}

	if (DBG) {
		REP(i, m) {
			cout << matches[i].second << " " << matches[i].first << endl;
		}		
	}
	cout << matches_count;

	return 0;
} 