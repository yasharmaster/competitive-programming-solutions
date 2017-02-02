#include <iostream>
#include <bitset>
#include <cmath>

#define DBG false
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)
#define MAX 1000007

typedef long long ll;

using namespace std;

bitset<MAX> is_prime;
int n;

void sieve(){
	is_prime.set();
	is_prime[0] = is_prime[1] = 0;
	int size = 1000*n + 1;
	FOR(i, 2, sqrt(size)){
		if(is_prime[i]){
			for(int j=i*i; j<=size; j += i){
				is_prime[j] = 0;
				if(j>=n+1 && j<=size){
					if((j-1)%n == 0){
						cout << (j-1)/n;
						return;
					}
				}
			}
		}
	}
//	FOR(k, n+1, size){
//		if(!is_prime[k]){
//			if((k-1)%n == 0){
//				cout << (k-1)/n;
//				break;
//			}
//		}
//	}
}

int main(){
	fast_io;
	cin >> n;
	sieve();
	
	return 0;
}
