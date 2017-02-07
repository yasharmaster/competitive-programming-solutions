#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <map>

#define DBG true
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;

map<int, string> Num;
int last;

string look_say(string str){
	string final;
	char c;
	int count, j, len = str.size();
	for(int i=0; i<len; ){
		c = str[i];
		j=i;
		count=0;
		while(str[j]==c){
			count++;
			j++;
			if(j>=len){
				break;
			}
		}
		final += to_string(count) + c;
		i=j;
	}
	return final;
}

int main(){
	fast_io;
	if(DBG){
		cout << "Starting execution" << endl;
	}
	Num[1] = "1";
	last = 1;
	if(DBG){
		cout << "Entered base value of 1" << endl;
	}
	int t;
	if(DBG){
		cout << "Enter No. of testcases " << endl;
	}
	cin >> t;
	while(t--){
		int n;
		if(DBG){
			cout << "Enter a number " << endl;
		}
		cin >> n;
		if(DBG){
			cout << "No. entered is " << n << endl;
		}
		if(n>last){
			if(DBG){
				cout << n << " not found in cache, running loop " << endl;
			}
			for(int i=last+1; i<=n; i++){
				Num[i] = look_say(Num[i-1]);
				if(DBG){
					DEBUG(Num[i]);
				}
			}
			if(DBG){
				cout << "last set to  " << n << endl;
			}
			last = n;
		}
		if(DBG){
			cout << "Printing output " << Num[n] << endl;
		}
	 	cout << Num[n] <<endl;
	}
	return 0;
}
