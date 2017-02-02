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
	int n;
	cin >> n;
	int A[n], sum = 0;
	for(int i=0; i<n; i++){
		cin >> A[i];
		sum += A[i];
	}
	bool zeroes_only = true;
	for(int i=0; i<n; i++){
		if(A[i]){
			zeroes_only = false;
			break;
		}
	}
	
	if(zeroes_only){
		cout << "NO";
	}
	else if(sum){
		cout << "YES" << endl;
		cout << 1 << endl;
		cout << 1 << " " << n;
	}
	else{
		int temp = 0, mid;
		for(int i=0; i<n; i++){
			temp += A[i];
			if(temp){
				mid = i + 1;
				break;
			}
		}
		cout << "YES" << endl << 2 << endl; 
		cout << 1 << " " << mid;
		cout << endl;
		cout << mid+1 << " " << n;
	}
	return 0;
}
