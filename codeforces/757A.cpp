#include <vector>
#include <iostream>
#include <cstdio>
#include <climits>
#include <cstring>
using namespace std;
#define DEBUG false
typedef long long int ll;

int main(){
	std::ios::sync_with_stdio(false);
	string str;
	cin >> str;
	int len = str.length();
	if(DEBUG){
		cout << "length of string is " << len << endl;	
	}
	vector<ll> A(7, 0);
	char p;
	for(int i=0; i<len; i++){
		p = str[i];
		if(DEBUG){
			cout << p << endl;	
		}
		switch (p){
			case 'B':
				A[0]++;
				break;
			case 'u':
				A[1]++;
				break;
			case 'l':
				A[2]++;
				break;
			case 'b':
				A[3]++;
				break;
			case 'a':
				A[4]++;
				break;
			case 's':
				A[5]++;
				break;
			case 'r':
				A[6]++;
				break;
		}
	}
	A[1] /= 2;
	A[4] /= 2;
	int min = INT_MAX;
	for(int i=0; i<7; i++){
		if(DEBUG){
			cout << A[i] << endl;	
		}
		if(min > A[i]){
			min = A[i];
		}
	}
	cout << min;
	return 0;
}
