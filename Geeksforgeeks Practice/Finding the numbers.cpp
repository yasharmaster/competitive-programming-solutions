#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <string>


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

void find_two_unique(int A[], int n, int *x, int *y){
    int XOR = 0;
    for(int i=0; i<n; i++){
        XOR ^= A[i];
    }
    int right_most_bit = XOR & ~(XOR-1);
    int a, b;
    a = b = 0;
    for(int i=0; i<n; i++){
        if(A[i] & right_most_bit){
            a ^= A[i];
        }
        else{
            b ^= A[i];
        }
    }
    *x = min(a, b);
    *y = max(a, b);
}