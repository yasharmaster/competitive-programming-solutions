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

int n;

void print_pattern_util(string str, char buffer[], int i, int j){
	if(j==n){
		buffer[i] = '\0';
		cout << '(' << buffer << ')';
		return;
	}

	buffer[i] = ' ';
	buffer[i+1] = str[j];
	print_pattern_util(str, buffer, i+2, j+1);

	buffer[i] = str[j];
	print_pattern_util(str, buffer, i+1, j+1);
}

void print_pattern(string str){
	n = str.siz;
	char buffer[2*n];

	buffer[0] = str[0];
	print_pattern_util(str, buffer, 1, 1);
}

int main(){
	fast_io;
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		print_pattern(str);
		cout << endl;
	}
	return 0;
}
