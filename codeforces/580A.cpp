#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	
	ll n;
	cin >> n;
	
	vector<ll> myvec(n);	
	
	for(int i=0; i<n; i++){
		cin >> myvec[i];
	}
	
	ll dp[n];
	
	for(ll i=0; i<n; i++){
		dp[i] = 1;
	}
	
	for(int i=1; i<n; i++){
		if(myvec[i] >= myvec[i-1]){
			dp[i] = dp[i-1] + 1;
		}
	}
	ll ans = INT_MIN;
	for(int i=0; i<n; i++){
		if(dp[i] > ans){
			ans = dp[i];
		}
	}
	cout << ans;
	
	return 0;
}
