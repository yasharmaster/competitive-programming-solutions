#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main(){
	
	ll n;
	cin >> n;
	
	if(n<=3){
		cout<< "NO";
	}
	else if((n-2)%2){
		cout<< "NO";
	}
	else{
		cout << "YES";
	}
	return 0;
}
