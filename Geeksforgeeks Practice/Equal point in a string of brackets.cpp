#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <string>


#define DBG false
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

int main(){
	fast_io;
	int t;
	cin >> t;
	while(t--){
	    string str;
	    cin >> str;
	    int len = str.length();
	    int A[len+2], B[len+2];
        int count_open = 0, count_close = 0;
        for(int i=0; i<=len; i++){
            A[i] = count_open;
            if ( i<len && str[i] == '('){
                count_open++;
            }
        }
        for(int i=len; i>=0; i--){
            if (i<len && str[i] == ')'){
                count_close++;
            }
            B[i] = count_close;
        }
        bool flag = false;
        int i;
        for(i=0; i<=len; i++){
            if(A[i]==B[i]){
                flag = true;
                break;
            }
        }
        int ans;
        if(flag){
            ans = i;
        }else{
            ans = -1;
        }
        cout << ans << endl;
	}
	
	return 0;
}
