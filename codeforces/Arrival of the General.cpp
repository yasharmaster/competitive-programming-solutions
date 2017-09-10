#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <string>

#define LOG(x) cerr << "*** " << x << " ***" << endl;
#define wi(x) what_is(x, '\n')
#define wisp(x) what_is(x, ", ")
#define what_is(x, terminator) cerr << #x << " = " << x << terminator;

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

int get_leftmost_index_of_largest(int *A, int n) {
	int max = INT_MIN, max_index = -1;
	for (int i=0; i<n; i++) {
		if (A[i] > max) {
			max = A[i];
			max_index = i;
		}
	}
	return max_index;
}

int get_rightmost_index_of_smallest(int *A, int n) {
	int min = INT_MAX, min_index = -1;
	for (int i=n-1; i>=0; i--) {
		if (A[i] < min) {
			min = A[i];
			min_index = i;
		}
	}
	return min_index;
}

int get_seconds_to_order(int *A, int n) {
	if (n <= 1) {
		return 0;
	}
	int leftmost_index_of_largest = get_leftmost_index_of_largest(A, n);
	int rightmost_index_of_smallest = get_rightmost_index_of_smallest(A, n);

	int swaps = leftmost_index_of_largest + n - rightmost_index_of_smallest -1;

	if (leftmost_index_of_largest < rightmost_index_of_smallest) {
		return swaps;
	}
	return swaps-1;
}

int main(){
	fast_io;
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
    int n;
    cin >> n;
    int *A = new int[n];

    for (int i=0; i<n; i++) {
    	cin >> A[i];
    }

    cout << get_seconds_to_order(A, n);
	return 0;
}