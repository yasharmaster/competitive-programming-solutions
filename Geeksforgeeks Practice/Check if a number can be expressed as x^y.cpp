#include <iostream>
using namespace std;

int main() {
	//code
	int t, n;
	cin >> t;
	while(t--){
	    cin >> n;
	    if(n==1){
	        cout << 1 << endl;
	        continue;
	    }
	    bool ans = 0;
	    for(int x=2; x*x<=n; x++){
	        int temp = x;
	        for(int y=2; temp<n; y++){
	            temp *= x;
	        }
	        if(temp>n){
	            continue;
	        }
	        else if(temp==n){
	            ans = 1;
	            break;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}