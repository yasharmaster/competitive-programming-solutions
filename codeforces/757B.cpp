#include <iostream>
#include <cstdio>
#include <climits>
#include <vector>
#include <string>
#include <cmath>
#include <bitset>
#include <map>

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

bitset<100005> is_prime;
vector<int> primes;
int *S, maximal, n;
map<int, int> count;

void sieve(int size){
	if(DBG){
		cout << "starting sieve\n";
	}
	is_prime.set();
	is_prime[0] = is_prime[1] = 0;
	FOR(i, 2, sqrt(size)){
		if(is_prime[i]){
			for(int j = i*i; j<=size; j += i){
				is_prime[j] = 0;
			}			
		}
	}
	FOR(i, 2, sqrt(size)){
		if(is_prime[i]){
			primes.push_back(i);
		}
	}
	if(is_prime[size]){
		primes.push_back(size);
	}
}

void test_sieve(){
	cout << "primes are\n";
	vector<int>::iterator itr = primes.begin();
	for(; itr != primes.end(); itr++){
		cout << *itr << endl;
	}
	cout << "done\n";
}

int solve(){
	if(DBG){
		test_sieve();
	}
	int ans = 1;
	
	FOR(i, 0, n-1){
		vector<int>::iterator itr = primes.begin();
		for(; *itr <= sqrt(S[i]); itr++){
			if(S[i]%(*itr) == 0){
				count[*itr]++;
				ans = max(ans, count[*itr]);
				while(S[i]%(*itr) == 0){
					S[i] /= *itr;
				}
			}
		}
		if(is_prime[S[i]]){
			count[S[i]]++;
			ans = max(ans, count[S[i]]);
		}
	}
	
	return ans;
}

int main(){
	fast_io;
	cin >> n;
	S = new int[n];
	maximal = INT_MIN;
	FOR(i, 0, n-1){
		cin >> S[i];
		if(S[i] > maximal){
			maximal = S[i];
		}
	}
	if(DBG){
		cout << "Maximal value is " << maximal << endl;
	}
	sieve(maximal);
	cout << solve();
	return 0;
}
