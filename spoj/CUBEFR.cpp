#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int binary_search(int A[], int size, int x){
	int min = 0;
	int max = size - 1;
	
	
	while(min <= max){
		int mid = (min + max)/2;
		
		if(A[mid] == x)
			return mid;
		else if	(A[mid] < x)
			min = mid+1;
		else
			max = mid-1;
	}
	return -1;
}

int main()
{
	const int max = 1000010;
	int is_cubefree[max];
	int i,c;
	for(i=1; i <=max; i++)
		is_cubefree[i] = 1;
	for(i=2; i<=100; i++){
		c = i*i*i;
		int z = 1;
		while(c*z < max){
			is_cubefree[c*z] = 0;
			z++;
		}
	}
	int ans[max];
	int j, size=0;
	for(i=1; i<=max; i++){
		if(is_cubefree[i] == 1)
			ans[size++] = i;
	}
	
	int t, n, count=0;
	scanf("%d", &t);
	for(i=1; i<=t; i++){
		count = 0;
		scanf("%d", &n);
		if(is_cubefree[n] == 0)
			printf("Case %d: Not Cube Free\n", i);
		else{
			printf("Case %d: %d\n", i, binary_search(ans, size, n)+1);
		}
	}
	return 0;
}
