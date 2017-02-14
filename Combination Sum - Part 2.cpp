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
 
int n, s;
 
set< multiset<int> > solns;
 
void print_set(multiset<int> &a){
	cout << "Soln found : ";
	for(multiset<int>::iterator itr = a.begin(); itr != a.end(); itr++){
		cout << *itr << " ";
	}
	cout << endl;
}
 
int counter = 0;
 
void backtrack(int A[], bool selected[], int x, int sum){
	if(sum == 0){
		multiset<int> myset;
		FOR(i, 0, n-1){
			if(selected[i]){
				myset.insert(A[i]);
			}
		}
		solns.insert(myset);
		if(DBG){
			print_set(myset);
		}
		return;
	}
	else if((sum < 0) || (x >= n) || (sum < A[x])){
		if(DBG){
			cout << "no solution\n";
		}
		return;
	}
	// Select xth element
	if(DBG){
		cout << A[x]<< " at index " << x   << " selected\n";
	}
	selected[x] = true;
	backtrack(A, selected, x+1, sum-A[x]);
 
	// Dont Select xth element
	if(DBG){
		cout << A[x] << " at index " << x  << " not selected\n";
	}
	selected[x] = false;
	FOR(i, x, n-1){
		selected[i] = false;
	}
	backtrack(A, selected, x+1, sum);
}
 
void combination_sum(int A[]){
	if((A[0] > s) || (n==1 && A[0]!=s)){
		return;
	}
	else if(n==1 && A[0]==s){
		multiset<int> myset;
		myset.insert(A[0]);
		solns.insert(myset);
		return;
	}
	bool selected[n];
	FOR(i, 0, n-1){	
		selected[i] = false;
	}
 
	// Select 1st element
	selected[0] = true;
	if(DBG){
		cout << A[0]<< " at index 0 "  << " selected\n";
	}
	backtrack(A, selected, 1, s-A[0]);
 
	// Dont select 1st element
	if(DBG){
		cout << A[0] << " at index 0 " << " not selected\n";
	}
	selected[0] = false;
	FOR(i, 0, n-1){
		selected[i] = false;
	}
	backtrack(A, selected, 1, s);
 
}
 
void print_solutions(){
	if(solns.empty()){
		cout << "Empty\n";
		return;
	}
	set< multiset<int> >::iterator itr;
	multiset<int> myset;
	multiset<int>::iterator i;
	for(itr = solns.begin(); itr != solns.end(); itr++){
		myset = *itr;
		cout << "(";
		for(i = myset.begin(); i != myset.end(); i++){
			cout << *i;
			auto t = i;
			t++;
			if(t != myset.end()){
			    cout << " ";
			}
		}
		cout << ")";
	}
	cout << endl;
}
 
void print_array(int A[]){
	cout << "Sorted array :\n";
	FOR(i,0,n-1){
		cout << A[i] << " ";
	}
	cout << endl;
}
 
int main(){
	fast_io;
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int A[n];
		FOR(i, 0, n-1){
			cin >> A[i];
		}
		cin >> s;
		sort(A, A+n);
		if(DBG){
			print_array(A);
		}
		combination_sum(A);
		print_solutions();
		solns.clear();
	}
	return 0;
}