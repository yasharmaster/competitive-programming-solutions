#include <bits/stdc++.h>

using namespace std;

#define DBG false
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

class Node{
public:
	int sum, first, sec;
};

class custom_sort
{
public:
    inline bool operator() (const Node& first, const Node& sec)
    {
        return (first.sum < sec.sum);
    }
};

int n, k;

vector<Node> vec;

bool no_common(Node &a, Node &b)
{
    if (a.first == b.first || a.first == b.sec ||
            a.sec == b.first || a.sec == b.sec)
        return false;
    return true;
}

void print(multiset<int> &a){
	multiset<int>::iterator itr = a.begin();
	for(; itr != a.end() ;itr++){
		cout << *itr << " ";
	}
	cout << "$";
}

void insert(set<multiset<int> > &solns, Node &i, Node &j, int A[]){
	multiset<int> myset;
	myset.insert(A[i.first]);
	myset.insert(A[i.sec]);
	myset.insert(A[j.first]);
	myset.insert(A[j.sec]);
	solns.insert(myset);
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int A[n];
		FOR(i, 0, n-1){
			cin >> A[i];
		}
		FOR(i, 0, n-2){
			FOR(j, i+1, n-1){
				Node a;
				a.sum = A[i]+A[j];
				a.first = i;
				a.sec = j;
				vec.push_back(a);
			}
		}
		if(DBG){
			cout << "Sum vector\n";
			FOR(i, 0, vec.size()-1){
				cout << vec[i].sum << " ";
			}			
			cout << endl;
		}
		sort(vec.begin(), vec.end(), custom_sort());
		if(DBG){
			cout << "Sum vector\n";
			FOR(i, 0, vec.size()-1){
				cout << vec[i].sum << " ";
			}			
			cout << endl;
		}

		int i = 0, j = vec.size()-1;
		set<multiset<int> > solns;
		while(i<vec.size() && j>=0){
			if((vec[i].sum + vec[j].sum == k) && no_common(vec[i], vec[j])){
				insert(solns, vec[i], vec[j], A);
				int x = i, y = j;
				i++;
				while( (i<vec.size() && j>=0) && vec[i].sum+vec[j].sum == k) {
					if(no_common(vec[i], vec[j])){
						insert(solns, vec[i], vec[j], A);
					}
					i++;
				}
				i=x;
				j--;
				while( (i<vec.size() && j>=0) && vec[i].sum+vec[j].sum == k) {
					if(no_common(vec[i], vec[j])){
						insert(solns, vec[i], vec[j], A);
					}
					j--;
				}
				i = x+1;	j = y-1;
			}
			else if(vec[i].sum + vec[j].sum < k){
				i++;
			}
			else{
				j--;
			}
		}
		if(solns.empty()){
			cout << "-1";
		}
		else{
			set<multiset<int> >::iterator itr = solns.begin();
			for(; itr != solns.end(); itr++){
				multiset<int> myset = *itr;
				print(myset);
			}			
		}
		vec.erase(vec.begin(), vec.end());
		cout << endl;
	}
	return 0;
}
