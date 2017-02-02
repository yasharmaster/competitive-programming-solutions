#include <cstdio>
#include <climits>
using namespace std;
int kadane(int A[], int n){
	int max_ending_here = 0, max_so_far = 0;
	for(int i=0; i<n; i++){
		max_ending_here += A[i];
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
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int A[n], flag=0;
		for(int i=0; i<n; i++){
			scanf("%d", &A[i]);
			if(A[i] >= 0)
				flag=1;
		}
		if(flag == 0){
			int ans = INT_MIN;
			for(int i=0; i<n; i++){
				if(A[i] > ans)
					ans = A[i];
			}
			printf("%d %d\n", ans, ans);
		}
		else{
			int msa = kadane(A, n);
			int mss=0;
			for(int i=0; i<n; i++){
				if(A[i] > 0){
					mss+= A[i];
				}
			}
			printf("%d %d\n", msa, mss);
		}
	}
	return 0;
}
