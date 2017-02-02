#include <cstdio>
#include <cmath>
#include <map>
#define ll long long

using namespace std;

map<ll, double> mymap;

double func(ll n){
	if(mymap.find(n) != mymap.end())
		return mymap[n];
	else{
		mymap[n] = (double((n-2)*(n-2))/(n*n))*func(n-2) + 8.0;
		return mymap[n];
	}	
}

double find_g(ll n){
	if(n==1)
		return 3.0;
	double temp = double(func(n)) - ((double((n-1)*(n-1))/(n*n)))*func(n-1) + 1.0/(n*n);
	temp = sqrt(temp);
	return temp;
}

int main()
{
	mymap[1] = 8;
	mymap[2] = 8;
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		printf("%.8lf\n", find_g(n));
	}	
	return 0;
}
