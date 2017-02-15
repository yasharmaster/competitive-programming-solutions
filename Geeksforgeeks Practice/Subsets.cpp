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

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;

int n;

set< multiset<int> > solns;

void clear_global_vars(){
	solns.clear();
}

void print_solns(){
	auto i = solns.begin();
	for(; i != solns.end(); i++){
		multiset<int> S = *i;
		auto itr = S.begin();
		cout << "(";
		for(; itr != S.end(); itr++){
			cout << *itr;
			auto t = itr;
			t++;
			if(t != S.end()){
			    cout << " ";
			}
		}
		cout << ")";
	}
	cout << endl;
}

void print_set(multiset<int> myset){
	auto i = myset.begin();
	for (; i != myset.end() ; ++i)
	{
		cout << *i << " ";
	}
}
void backtrack(int A[], bool selected[], multiset<int> myset, int i){
	if(i>n){
		return;
	}
	if(DBG){
		cout << "Inserting soln ";
		print_set(myset);
		cout << endl;
	}
	solns.insert(myset);
	if(i==n){
		return;
	}
	myset.insert(A[i]);
	selected[i] = true;
	if(DBG){
		cout<< A[i] << " at index " << i << " selected ";
		cout << "Current soln ";
		print_set(myset);
		cout << endl;
	}
	backtrack(A, selected, myset, i+1);
	auto itr = myset.find(A[i]);
	if(itr!=myset.end()){
	    myset.erase(itr);
	}
	selected[i] = false;
	if(DBG){
		cout<< A[i]<< " at index " << i << " removed ";
		cout << "Current soln ";
		print_set(myset);
		cout << endl;
	}
	backtrack(A, selected, myset, i+1);
}

void find_subsets(int A[]){
	bool selected[n];
	FOR(i, 0, n-1){
		selected[i] = false;
	}
	multiset<int> myset;
	myset.insert(A[0]);
	selected[0] = true;
	if(DBG){
		cout<< A[0] << " selected\n";
	}
	backtrack(A, selected, myset, 1);
	auto itr = myset.find(A[0]);
	if(itr!=myset.end()){
	    myset.erase(itr);
	}
	selected[0] = false;
	if(DBG){
		cout<< A[0] << " removed\n";
	}
	backtrack(A, selected, myset, 1);
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
		find_subsets(A);
		print_solns();
		clear_global_vars();
	}
	return 0;
}
