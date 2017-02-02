#include <iostream>
#include <vector>
#include <cmath>
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	ll t;
	cin >> t;
	while(t--){
		unsigned ll n;
		cin >> n;
		unsigned ll ans;
		
		if(!(n & 1)){
			double a = log(n)/log(2);
			ll bits = floor(a) + 1;
			vector<int> v;
			ll i;
			for(i=0; i<bits; i++){
				int p = n >> i;
				if(p & 1)
					v.push_back(1);
				else
					v.push_back(0);
			}
			ans = 0;
			ll j = bits-1;
			for(i = 0; i < bits; i++){
				ans += v[j] * pow(2, i);
				j--;
			}
		}
		else
			ans = n;
		cout << ans << endl;
	}	
	return 0;
}
