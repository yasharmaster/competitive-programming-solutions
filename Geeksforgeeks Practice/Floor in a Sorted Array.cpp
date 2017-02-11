#include <bits/stdc++.h>


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

int floor_search(int A[], int low, int high, int k){
	if(low > high){
		return -1;
	}

	if(k >= A[high]){
		return high;
	}

	int mid = (low+high)/2;

	if(A[mid] == k){
		return mid;
	}

	if(mid>0 && A[mid]>k && A[mid-1]<=k){
		return mid-1;
	}

	if(A[mid] > k){
		return floor_search(A, low, mid-1, k);
	}
	else{
		return floor_search(A, mid+1, high, k);
	}
}

int main(){
	fast_io;
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int A[n];
		FOR(i, 0, n-1){
			cin >> A[i];
		}
		cout << floor_search(A, 0, n-1, k) << endl;
	}
	return 0;
}
