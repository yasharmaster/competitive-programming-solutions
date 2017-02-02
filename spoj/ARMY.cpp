#include <iostream>
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	ll t;
	cin >> t;
	while(t--){
		ll g, m;
		cin >> g >> m;
		
		if(g==0 && m ==0)
			cout << "uncertain\n" ;
		else{
			ll maxg = 0, maxm = 0, temp;
			
			while(g--){
				cin >> temp;
				if(temp > maxg)
					maxg = temp;			
			}
			while(m--){
				cin >> temp;
				if(temp > maxm)
					maxm = temp;	
			}
			if(maxg >= maxm)
				cout << "Godzilla\n";
			else
				cout << "MechaGodzilla\n";
		}
	}
	return 0;
}
