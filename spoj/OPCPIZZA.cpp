#include <cstdio>
#include <climits>
#include <vector>
#include <algorithm>
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n, k, i, temp, j, count=0;
		scanf("%lld%lld", &n, &k);
		vector<ll> v;
		for(i=0; i<n; i++){
			scanf("%lld", &temp);
			v.push_back(temp);
		}
		sort(v.begin(), v.end());
		
		for(i=0; i<n; i++){
			for(j=i+1; j<n; j++){
				if(v[i]+v[j] < k){
					continue;
				}
				if(v[i]+v[j] > k)
					break;
				if(v[i]+v[j] == k){
					count++;
				}
			}
		}
		printf("%lld\n", count);
	}
	return 0;
}
