#include <bits/stdc++.h>
#define ll long long

using namespace std;
#define MAX 100009
int main(){
	
	ll n;
	cin >> n;
	
	ll temp;
	vector<ll> COUNT(MAX, 0);
	for(ll i=0; i<n; i++){
		cin >> temp;
		COUNT[temp]++;
	}
	
	ll dp[MAX];
	dp[0] = 0;
	dp[1] = COUNT[1];
	
	for(ll i=2; i<MAX; i++){
		dp[i] = max(COUNT[i]*i + dp[i-2], dp[i-1]);
	}
	cout << dp[MAX-1];
	
	return 0;
}
