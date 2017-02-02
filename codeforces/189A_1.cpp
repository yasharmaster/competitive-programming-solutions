#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
#define MAX 4005
typedef long long int ll;

int main(){
	ll n, a, b, c;
	cin >> n >> a >> b >> c;
	int max = INT_MIN;
	for(int x=0; x<=n; x++){
		for(int y=0; y<=n; y++){
			int temp = n - a*x - b*y;
			if(temp%c == 0 && temp >= 0){
				int z = temp/c;
				if(x+y+z > max){
					max = x+y+z;
				}
			}
		}
	}
	cout << max;
	return 0;
}
