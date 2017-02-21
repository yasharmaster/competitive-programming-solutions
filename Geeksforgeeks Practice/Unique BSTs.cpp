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
#define MAX 500

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;

int dp[MAX+5];
int last;

void init(){
    FOR(i,0,MAX){
        dp[i] = 0;
    }
    dp[0] = dp[1] = 1;
    last = 1;
}

int func(int n){
    if (n<=last){
        return dp[last];
    }
    FOR(i,last+1, n-1){
    	int sum = 0;
    	FOR(j, 0, i-1){
    		sum += (dp[j]*dp[i-1-j]);
    	}
    	dp[i] = sum;
    	last = i;
    }
    int ans = 0;
    FOR(i, 0, n-1){
		ans += dp[i]*dp[n-1-i];
    }
    return ans;
}

int main(){
	fast_io;
	init();
	cin >> t;
    int n;
	while(t--){
        cin >> n;
        cout << func(n) << endl;
	}
	return 0;
}