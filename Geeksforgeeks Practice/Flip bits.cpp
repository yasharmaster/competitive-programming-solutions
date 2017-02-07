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

int max_sum(int A[], int n){
    int max_so_far = 0, max_ending_here = 0;
    for(int i=0; i<n; i++){
        max_ending_here = max_ending_here + A[i];
        max_so_far = max(max_so_far, max_ending_here);
        if(max_ending_here<0){
            max_ending_here=0;
        }
    }
    return max_so_far;
}

int main(){
	fast_io;
	int t, n;
	cin>> t;
	while(t--){
	    cin >> n;
	    int A[n], B[n], sum=0;
	    FOR(i, 0, n-1){
	        cin>>A[i];
	        sum += A[i];
	        if(A[i]){
	            B[i] = -1;
	        }
	        else{
	            B[i] = 1;
	        }
	    }
	    sum += max_sum(B, n);
	    cout<<sum <<endl;
	}
	return 0;
}