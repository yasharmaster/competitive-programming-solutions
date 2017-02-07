#include <bits/stdc++.h>

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
	int t, n;
	cin >> t;
	while(t--){
	    cin>>n;
	    int A[n];
	    FOR(i, 0, n-1){
	        cin >> A[i];
	    }
	    int mx=INT_MIN, mn=INT_MAX;
	    FOR(i, 0, n-1){
	        mx=max(mx, A[i]-i);
	        mn=min(mn, A[i]-i);
	    }
	    cout << mx-mn << endl;
	}
	return 0;
}