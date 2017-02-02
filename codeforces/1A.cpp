#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main(){
	
	ll n, m, a;
	cin >> n >> m >> a;
	
	ll x = m/a, y = n/a;
	if(m%a != 0){
		x++;
	}
	if(n%a != 0){
		y++;
	}
	cout<< x*y;
	
	return 0;
}
