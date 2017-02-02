#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <string>


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
	int n;
	cin >> n;
	int A[n], maximal = -999;
	FOR(i, 0, n-1){
		cin >> A[i];
		if(A[i] > maximal){
			maximal = A[i];
		}
	}
	if(n==1){
		cout << 0;
		return 0;
	}
	int ans = 0;
	FOR(i, 0, n-1){
		ans += (maximal-A[i]);
	}
	cout << ans;
	return 0;
}
