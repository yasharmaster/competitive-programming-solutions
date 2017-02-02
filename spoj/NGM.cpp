#include <iostream>
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	ll n;
	cin >> n;
	
	if(n%10 == 0)
		cout << "2";
	else
		cout << "1\n" << n%10;
	
	return 0;
}
