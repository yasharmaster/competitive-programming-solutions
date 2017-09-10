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

bool perfect_perm(int *A, int n) {
	FOR(i, 1, n) {
		if (A[i] == i)
			return false;
	}
	return true;
}

bool perm_helper(int *A, int n, int index) {
	if (index >= n) {
		if (perfect_perm(A, n)) {
			FOR(i, 1, n) {
				cout << A[i] << " ";
			}
			cout << endl;
			return true;
		}
	}
	FOR(i, index, n){
		if (A[i] != index && A[index] != i) {
			int temp = A[index];
			A[index] = A[i];
			A[i] = temp;

			if (perm_helper(A, n, index+1)) {
				return true;
			}

			temp = A[index];
			A[index] = A[i];
			A[i] = temp;
		}
	}
	return false;
}

void print_min_perm(int *A, int n){
	perm_helper(A, n, 1);
}

int main(){
	fast_io;
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int *A = new int[n+1];
	    FOR(i,1,n){
	    	A[i] = i;
	    }
	    print_min_perm(A, n);
	    delete A;
	}
	return 0;
} 