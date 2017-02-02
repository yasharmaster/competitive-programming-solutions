#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

int main()
{
	while(1){
		float A[8];
		int i;
		float cakes = 0;
		for(i=0; i<8; i++)
			scanf("%f", &A[i]);	
		if(A[0] == -1 && A[1] == -1 && A[2] == -1 && A[3] == -1 &&A[4] == -1 && A[5] == -1 && A[6] == -1 && A[7] == -1 )
			break;
		for(i=0; i<4; i++)
			if(cakes < A[i]/A[i+4])
				cakes = A[i]/A[i+4];
		if (cakes > floor(cakes))
			cakes = floor(cakes) + 1;
		ll B[4];
		for(i=0; i < 4; i++)
			B[i] = cakes*A[i+4] - A[i];
		for(i=0; i<4; i++)
			printf("%d ", B[i]);
		printf("\n");
	}
	return 0;
}
