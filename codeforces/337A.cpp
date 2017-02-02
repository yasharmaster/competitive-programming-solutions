#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	
	ll m, n;
	cin >> n >> m;
	
	vector<ll> myvec(m);	
	
	for(int i=0; i<m; i++){
		cin >> myvec[i];
	}
	
	sort(myvec.begin(), myvec.end());
	
	ll min = INT_MAX;
	
	for(int i=0; i<=m-n; i++){
		ll temp = myvec[i+n-1] - myvec[i];
		if(temp < min){
			min=temp;
		}
	}
	cout << min;
	
	return 0;
}
