#include <iostream>
#define DBG false
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int A[n+1];
	    for(int i=1; i<=n; i++){
	        cin >> A[i];
	    }
	    if(n==1){
	        cout << 1 << endl;
	        continue;
	    }
	    int left = 1, right = n;
	    int lsum = A[left], rsum = A[right];
	    int ans = -1;
	    if(DBG){
	        DEBUG(left); DEBUG(right); DEBUG(lsum); DEBUG(rsum);
	    }
	    while(left<right){
    	    if(DBG){
    	        DEBUG(left); DEBUG(right); DEBUG(lsum); DEBUG(rsum);
    	    }
	        if(right == left+2 && lsum==rsum){
	            ans = left+1;
	            break;
	        }
	        if(lsum >= rsum){
	            right--;
	            rsum += A[right];
	        }
	        else if(lsum < rsum){
	            left++;
	            lsum += A[left];
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}