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
#define MAX 100005
typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	if(n&1){
		ll temp = n - 3;
		int number = (n-3)/2 + 1;
		cout << number << endl;
		while(temp){
			cout << "2 ";
			temp -= 2;
		}
		cout << "3";
	}
	else{
		ll temp= n;
		int number = n/2;
		cout << number << endl;
		while(temp){
			cout << "2 ";
			temp -= 2;
		}
	}
	return 0;
}
