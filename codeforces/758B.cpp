#include <iostream>
#include <climits>
#include <string>

#define DBG false
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

using namespace std;

int main(){
	fast_io;
	string str;
	cin >> str;
	int n = str.size();
	int td=0;
	bool bp = false, gp= false, rp= false, yp=false;
	FOR(i,0,n-1){
		if(str[i]=='!'){
			td++;
		}
	}
//	DEBUG(td);
	if(td==0){
		cout << "0 0 0 0";
		return 0;
	}
	int i=0, r=0, b=0, y=0, g=0;
	while(i<n){
//		DEBUG(i);
		int base = i;
		bool crossed = false;
		if(r && b && y && g){
			break;
		}
		FOR(j, i, i+3){
			if(j>=n){
				crossed = true;
				break;
			}
//			DEBUG(j);
			switch(str[j]){
				case '!':
					break;
				case 'R':
					r = j - base;
					break;
				case 'B':
					b = j - base;
					break;
				case 'Y':
					y = j - base;
					break;
				case 'G':
					g = j - base;
					break;
			}
		}
		if(crossed){
			break;
		}
		i+=4;
	}
//	DEBUG(r); DEBUG(y); DEBUG(g); DEBUG(b);
	int rc=0, yc=0, bc=0, gc=0;
	for(int i=r; i<n; i+=4){
		if(str[i]=='!')
			rc++;
	}
	for(int i=y; i<n; i+=4){
		if(str[i]=='!')
			yc++;
	}
	for(int i=g; i<n; i+=4){
		if(str[i]=='!')
			gc++;
	}
	for(int i=b; i<n; i+=4){
		if(str[i]=='!')
			bc++;
	}
	cout << rc << " " << bc << " " << yc << " " << gc;
	return 0;
}
