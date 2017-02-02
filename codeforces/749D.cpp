#include <iostream>
#include <cstdio>
#include <climits>
#include <vector>
#include <string>
#include <map>
#include <set>
#define DEBUG false
#define endl "\n"

typedef long long ll;

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	ll n;
	cin >> n;
	map<ll, vector<ll> > bids;
	set< pair<ll, ll> > myset;
	map<ll, ll> max_bid;
	ll person, bid;
	for(ll i=0; i<n; i++){
		cin >> person >> bid;
		bids[person].push_back(bid);
	}
	vector<ll>::iterator itr;
	for(ll i=1; i<=n; i++){
		if(bids.find(i) != bids.end() ){
			bid = INT_MIN;
			for(itr = bids[i].begin(); itr != bids[i].end(); itr++){
				if( *itr > bid ){
					bid = *itr;
				}
			}
			max_bid[i] = bid;
			myset.insert(make_pair(bid, i));
		}
	}
	set< pair<ll, ll> >::iterator it;
	if(DEBUG){
		cout << "printing set\n";
		for(it = myset.begin(); it != myset.end(); it++){
			cout << (*it).first << " " << (*it).second << endl;
		}		
		cout << "over\n";
	}
	ll q, k, temp;
	cin >> q;
	while(q--){
		set< pair<ll, ll> > newset = myset;
		cin >> k;
		while(k--){
			cin >> temp;
			if(bids.find(temp) != bids.end()){
				newset.erase(newset.find(make_pair(max_bid[temp], temp)));
			}
		}
		if(DEBUG){
			cout << "printing set\n";
			for(it = newset.begin(); it !=newset.end(); it++){
				cout << (*it).first << " " << (*it).second << endl;
			}	
			cout << "over\n";	
		}
		if( newset.empty() ){
			cout << "0 0\n";
		}
		else{
			ll max_bid_person = (*(newset.rbegin())).second;
			ll max_bid = (*(newset.rbegin())).first;
			newset.erase(--newset.end() );
			if(newset.empty()){
				cout << max_bid_person << " " << bids[max_bid_person][0] << endl;
			}
			else{
				ll second_max_bid = (*(newset.rbegin())).first;
				cout << max_bid_person << " ";
				ll size = bids[max_bid_person].size() - 1;
				ll x = 0;
				ll mid = size/2;
				while(true){
					if(bids[max_bid_person][mid] < second_max_bid){
						x = mid;
						mid = (x+size)/2;
					}
					else if( bids[max_bid_person][mid] > second_max_bid){
						size = mid;
						mid = (x+size)/2;
					}
					else{
						cout << bids[max_bid_person][mid+1];
						break;
					}
					if(size-x <= 2){
						break;
					}
				}
				cout << bids[max_bid_person][size] << endl;
			}
		}
	}
	
	return 0;
}
