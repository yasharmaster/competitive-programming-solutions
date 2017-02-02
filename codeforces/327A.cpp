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
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
#define MAX 4005
typedef long long int ll;

int kadane(int A[], int n){
	int max_so_far = 0, max_ending_here = 0;
	for(int i=0; i<n; i++){
		max_ending_here = max_ending_here + A[i];
		if(max_ending_here < 0){
			max_ending_here = 0;
		}
		if(max_so_far < max_ending_here){
			max_so_far = max_ending_here;
		}
	}
	return max_so_far;
}

int main(){
	ll n;
	cin >> n;
	int A[n], B[n], one_count=0;
	for(int i=0; i<n; i++){
		cin >> A[i];
		if(A[i]){
			B[i] = -1;
			one_count++;
		}
		else{
			B[i] = 1;
		}
	}
	
	int max_sum = kadane(B, n);
	if(max_sum == 0){
		cout << one_count - 1;
	}
	else{
		cout << one_count + max_sum;
	}
	
	
	return 0;
}
