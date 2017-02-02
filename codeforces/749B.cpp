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
typedef pair<ll, ll> Point;


int main(){
	
	Point A, B, C;
	
	cin >> A.first >> A.second >> B.first >> B.second >> C.first >> C.second;
	cout << 3 << endl;
	cout << B.first + C.first - A.first << " " << B.second + C.second - A.second << endl;
	cout << B.first - C.first + A.first << " " << B.second - C.second + A.second << endl;
	cout << C.first + A.first - B.first << " " << C.second + A.second - B.second << endl;
	
	
	return 0;
}
