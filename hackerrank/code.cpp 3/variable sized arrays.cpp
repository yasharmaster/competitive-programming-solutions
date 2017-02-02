#include <iostream>

using namespace std;

int main(){
	int n, q;
	scanf("%d%d", &n, &q);
	int **array = new int*[n];
	for(int i=0; i<n; i++){
		int k;
		scanf("%d", &k);
		array[i] = new int[k];
		for(int j=0; j<k; j++){
			scanf("%d", &array[i][j]);
		}
	}
	while(q--){
		int a,b;
		scanf("%d%d", &a,&b);
		printf("%d\n", array[a][b]);
	}
	return 0;
}
