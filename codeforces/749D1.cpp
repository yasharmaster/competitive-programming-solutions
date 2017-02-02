#include <iostream>
#include <algorithm>
#include <cstdio>
#include <climits>
#include <vector>
#include <string>
#include <set>

#define DBG false
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

typedef long long ll;

using namespace std;

int main(){
	fast_io;
	int n;
	cin >> n;
	vector<int> bids[n+1];
	int max_bid[n+1], person, bid, q, k;
	FOR(i, 1, n){
		max_bid[i] = -1;
	}
	REP(i, n){
		cin >> person >> bid;
		bids[person].push_back(bid);
		if(max_bid[person] < bid){
			max_bid[person] = bid;
		}
	}
	set< pair<int, int> > myset;
	FOR(i, 1, n){
		if(max_bid[i] != -1){
			myset.insert(make_pair(-max_bid[i], i));
		}
	}
	FOR(i, 1, n){
		sort(bids[i].begin(), bids[i].end());
	}
	cin >> q;
	while(q--){
		cin >> k;
		vector<int> gone;
		REP(i, k){
			cin >> person;
			gone.push_back(person);
			if(max_bid[person] != -1){
				myset.erase(make_pair(-max_bid[person], person));
			}
		}
		if(myset.empty()){
			cout << "0 0\n";
		}
		else if(myset.size() == 1){
			person = (*myset.begin()).second; 
			cout << person << " " << bids[person][0] << endl;
		}
		else{
			set<pair<int, int> >::iterator itr = myset.begin();
			pair<int, int> a = *itr;
			itr++;
			pair<int, int> b = *itr;
			bid = *lower_bound(bids[a.second].begin(), bids[a.second].end(), -b.first);
			cout << a.second << " " << bid << endl;
		}
		REP(i, k){
			if( max_bid[gone[i]] != -1){
				myset.insert(make_pair(-max_bid[gone[i]], gone[i]));	
			}
		}
	}

	
	return 0;
}
