#include <iostream>
#include <cstdio>
#include <climits>
#include <vector>
#include <string>
#include <queue>

#define DEBUG false

typedef long long ll;

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	ll n;
	cin >> n;
	string str;
	cin >> str;
	queue<ll> dep, rem;
	for(int i=0; i<n; i++){
		if(str[i] == 'R'){
			rem.push(i);
		}
		else{
			dep.push(i);
		}
	}
	int temp;
	while(true){
		if( dep.empty() ){
			cout << "R";
			break;
		}
		else if( rem.empty() ){
			cout << "D";
			break;
		}
		
		if( rem.front() < dep.front() ){
	//		cout << "R voting " << dep.front() << " popped " << endl;
			dep.pop();
			temp = rem.front() + n;
			rem.pop();
			rem.push(temp);
		}
		else{
		//	cout << "D voting " << rem.front() << " popped " << endl;
			rem.pop();
			temp = dep.front() + n;
			dep.pop();
			dep.push(temp);
		}
		
	}
	return 0;
}
