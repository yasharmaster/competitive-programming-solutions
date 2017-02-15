// Combination Sum - geeksforgeeks
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

int n, s, N;

set< multiset<int> > solns;

void print_set(multiset<int> &a){
	cout << "Soln found : ";
	for(auto itr = a.begin(); itr != a.end(); itr++){
		cout << *itr << " "; 
	}
	cout << endl;
}

void backtrack(vector<int> A, multiset<int> myset, int sum, int i){
	if(DBG){
		cout << "backtrack called for sum " << sum << endl;
	}
	if(sum < 0 || i>=n){
		return;
	}
	if(sum==0){
		solns.insert(myset);
		return;
	}
	myset.insert(A[i]);
	if(DBG){
		cout<< A[i] << " selected\n";
	}
	backtrack(A, myset, sum-A[i], i);
	
	auto itr = myset.find(A[i]);
	if(itr!=myset.end()){
	    myset.erase(itr);
	}
	if(DBG){
		cout<< A[i] << " removed\n";
	}
	backtrack(A, myset, sum, i+1);
}

void combination_sum(vector<int> A){
	if((A[0] > s) || (n==1 && A[0]!=s)){
		return;
	}
	else if(n==1 && A[0]==s){
		multiset<int> myset;
		myset.insert(A[0]);
		solns.insert(myset);
		return;
	}
	multiset<int> myset;
	myset.insert(A[0]);
	if(DBG){
		cout<< A[0] << " selected\n";
	}
	backtrack(A, myset, s-A[0], 0);
	auto itr = myset.find(A[0]);
	if(itr!=myset.end()){
	    myset.erase(itr);
	}
	if(DBG){
		cout<< A[0] << " removed\n";
	}
	backtrack(A, myset, s, 1);
}

void print_solutions(){
	if(solns.empty()){
		cout << "Empty\n";
		return;
	}
	set< multiset<int> >::iterator itr;
	multiset<int> myset;
	for(auto itr = solns.begin(); itr != solns.end(); itr++){
		myset = *itr;
		cout << "(";
		for( auto i = myset.begin(); i != myset.end(); i++){
			cout << *i ;
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

void print_array(vector<int> A){
	cout << "Sorted vector :\n";
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
		cin >> N;
		int temp;
		set<int> myset;
		FOR(i, 0, N-1){
			cin >> temp;
			myset.insert(temp);
		}
		vector<int> A;
		auto itr = myset.begin();
		for(; itr != myset.end(); itr++){
			int kpop = *itr;
			A.push_back(*itr);
		}
		n = A.size();
		cin >> s;
		if(DBG){
			print_array(A);
		}
		combination_sum(A);
		print_solutions();
		solns.clear();
	}
	return 0;
}
