#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
#define MAX 4005
typedef long long int ll;

int main(){
	ll n, a, b, c;
	cin >> n >> a >> b >> c;
	
	vector<ll> dp(MAX, INT_MIN);
	dp[a] = dp[b] = dp[c] = 1;
	dp[0] = 0;
	
	for(int i=1; i<=n; i++){
		if(i-a >= 0){
			if(dp[i] < dp[i-a] + 1){
				dp[i] = dp[i-a] + 1;
			}
		}
		if(i-b >= 0){
			if(dp[i] < dp[i-b] + 1){
				dp[i] = dp[i-b] + 1;
			}
		}
		if(i-c >= 0){
			if(dp[i] < dp[i-c] + 1){
				dp[i] = dp[i-c] + 1;
			}
		}
	}
/*
	for(int i=0; i<=n; i++){
		cout << i << " : " << dp[i] << endl;
	}
	cout << endl;
*/
	cout << dp[n];
	return 0;
}
