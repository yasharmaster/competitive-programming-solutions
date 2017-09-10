#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <string>

// #define LOGGING // May cause TLE or CE
#ifdef LOGGING
	#define LOG(x) cerr << "*** " << x << " ***" << endl;
	#define wi(x) what_is(x, '\n')
	#define wisp(x) what_is(x, ", ")
	#define what_is(x, terminator) cerr << #x << " = " << x << terminator;
#else
	#define LOG(x)
	#define wi(x)
	#define wisp(x)
	#define what_is(x, terminator)
#endif

#define DBG false
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;

int max(int a, int b) {
	if (a<b) return b;
	return a;
}

int minimum_platforms(int *Arrival, int *Depart, int n) {
	int max_platforms = INT_MIN, platforms = 0, arrival_index = 0, depart_index = 0;
	while (arrival_index < n || depart_index < n) {
		if ((arrival_index < n && depart_index >= n) || (Arrival[arrival_index] < Depart[depart_index])) {
			platforms++;
			max_platforms = max(max_platforms, platforms); 
			arrival_index++;
		}
		else if ((arrival_index >= n && depart_index < n) || (Arrival[arrival_index] > Depart[depart_index])) {
			platforms--;
			max_platforms = max(max_platforms, platforms); 
			depart_index++;
		}
	}
	return max_platforms;
}

int main(){
	fast_io;
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int *Arrival = new int[n];
	    int *Depart = new int[n];

	    for (int i=0; i<n; i++) {
	    	cin >> Arrival[i];
	    }
	    for (int i=0; i<n; i++) {
	    	cin >> Depart[i];
	    }
	    cout << minimum_platforms(Arrival, Depart, n) << endl;

	}
	return 0;
}