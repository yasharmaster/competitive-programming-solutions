#include <iostream>
#define endl "\n"
#define ll long long

using namespace std;

inline int max(int x, int y){
	if(x <= y)
		return y;
	return x;
}

ll max_sum_subarray(ll arr[], ll n, ll m){
	int ans = 0, sum = 0;
	for(int p = 0; p <n; p++){
		sum =0;
		for(int i=p; i<n; i++){
			if(sum + arr[i] <= m)
				sum += arr[i];
			else
				continue;
		//	int temp = max(ans, sum);
		//	if(temp <= m)
			ans = max(ans, sum);
		}
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	
	ll n, m;
	cin >> n >> m;
	ll arr[n];
	
	ll i;
	for(i=0; i<n; i++)
		cin >> arr[i];
	
	cout << max_sum_subarray(arr, n, m);
	return 0;
}
