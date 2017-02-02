#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>

#define DBG false
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;


int main(){
	fast_io;
	int n, k;
	cin >> n >> k;
	int time = 4*60-k;
	int i=0;
	while(i<=n && time>0){
		i++;
		time-=5*i;
	}
	if(time==0){
		cout << i;
	}
	else if(time<0){
		cout << i-1;
	}
	else if(time > 0 && i>=n){
		cout << n;
	}
	return 0;
}
