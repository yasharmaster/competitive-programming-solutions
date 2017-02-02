#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main(){
	
	ll m, n;
	cin >> m >> n;
	if(n&1 && m&1){
		cout << ((m-1)/2)*n + n/2;
	}
	else {
		cout << m*n/2;
	}
	return 0;
}
