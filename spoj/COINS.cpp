#include <cstdio>
#include <map>
#define ll long long

using namespace std;

typedef map<long long int, long long int> mymap;
mymap data;

ll fun(ll n){
	ll temp;
	if(data.find(n) == data.end()){
		temp = fun(n/2)+fun(n/3)+fun(n/4);
		if( temp < n)
			data[n] = n;
		else
			data[n] = temp;
		return data[n];
	}
	return data[n];
}

int main()
{
	data[0] = 0;
	ll n;
	while(scanf("%lld", &n) == 1){
		printf("%lld\n", fun(n));
	}
	return 0;
}
