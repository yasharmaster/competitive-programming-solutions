#include <iostream>
#include <string>

#define DBG false
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

using namespace std;

int main(){
	fast_io;

	int pos = 0, n;
	cin >> n;
	string south="South", north="North", east="East", west="West";
	bool valid = true;
	int length[n];
	string dir[n];
	for(int i=0; i<n; i++){
		cin >> length[i];
		cin >> dir[i];
	}
	for(int i=0; i<n; i++){
		if(pos==0 && south.compare(dir[i]) != 0){
			valid=false;
			break;
		}
		if(pos==20000 && north.compare(dir[i]) != 0){
			valid = false;
			break;
		}
		if(east.compare(dir[i])==0 || west.compare(dir[i])==0){
			continue;
		}
		else if(north.compare(dir[i])==0){
			if(length[i] > 20000){
				valid = false;
				break;
			}
			pos -= length[i];
		}
		else if(south.compare(dir[i])==0){
			if(length[i] > 20000){
				valid = false;
				break;
			}
			pos += length[i];
		}
		
		if(pos<0 || pos>20000){
			valid=false;
			break;
		}
	}
	if(!valid || pos){
		cout << "NO";
	}
	else{
		cout << "YES";
	}
	return 0;
}
