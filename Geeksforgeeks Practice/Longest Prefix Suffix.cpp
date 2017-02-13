#include <bits/stdc++.h>


#define DBG false
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)
#define siz size()

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;

int lps(string str){
	int n = str.siz;

	vector<int> A(n, 0);
	A[0] = 0;
	int j = 0, i = 1;
	while(i<n && j<i){
		if(str[i] == str[j]){
			A[i] = j+1;
			i++;	j++;
			continue;
		}
		if(str[i] != str[j]){
			if(j==0){
				A[i] = 0;
				i++;	j++;
			}
			else{
				j = A[j-1];
			}
			continue;
		}
	}
	return A[n-1];
}

int main(){
	fast_io;
	int t;
	string str;
	cin >> t;
	while(t--){
		cin >> str;
		cout << lps(str) << endl;
	}
	return 0;
}
