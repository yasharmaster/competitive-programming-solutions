#include <cstdio>
#include <vector>
#include <algorithm>
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
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
			if(v[j] - v[i] > k)
				break;
			else if(v[j] - v[i] == k){
				count++;
				break;
			}
		}
	}
	printf("%lld", count);
	return 0;
}
