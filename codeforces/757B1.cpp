#include <iostream>
#include <cmath>
#include <unordered_map>

#define DBG false
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

typedef long long ll;

using namespace std;

unordered_map<int, int> factors;


int main(){
	fast_io;
	int n, number;
	cin >> n;
	
	while(n--){
		cin >> number;
		FOR(i, 2, sqrt(number)){
			if(number%i == 0){
				factors[i]++;
			}
			while(number%i == 0){
				number /= i;
			}
		}
		if(number > 1){
			factors[number]++;
		}
	}
	int ans = 1;
	unordered_map<int, int>::iterator itr = factors.begin();
	for(; itr != factors.end(); itr++){
		ans = max(ans, (*itr).second);
	}
	
	cout << ans;
	
	return 0;
}
