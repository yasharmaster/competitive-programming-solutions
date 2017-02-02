#include <cstdio>
#include <climits>
#include <cmath>

using namespace std;

double distance(int x1, int y1, int x2, int y2){
	double a = x1 - x2;
	double b = y1 - y2;
	a = a*a;
	b = b*b;
	return sqrt(a+b);
}

int main(){
	int n;
	scanf("%d", &n);
	int Xxmin = INT_MAX, Yxmin;
	int Xymin, Yymin = INT_MAX;
	int Xxmax = INT_MIN, Yxmax;
	int Xymax, Yymax = INT_MIN;
	
	int x, y;
	
	while(n--){
		scanf("%d%d", &x, &y);
		if(x < Xxmin){
			Xxmin = x;
			Yxmin = y;
		}
		if(y < Yymin){
			Yymin = y;
			Xymin = x;
		}
		if(x > Xxmax){
			Xxmax = x;
			Yxmax = y;
		}
		if(y > Yymax){
			Yymax = y;
			Xymax = x;
		}
	}
	double max_dist = -1;
	double temp = distance(Xymin, Yymin, Xymax, Yymax);
	if(max_dist < temp){
		max_dist = temp;
	}
	temp = distance(Xymin, Yymin, Xxmax, Yxmax);
	if(max_dist < temp){
		max_dist = temp;
	}
	temp = distance(Xymin, Yymin, Xxmin, Yxmin);
	if(max_dist < temp){
		max_dist = temp;
	}
	temp = distance(Xxmax, Yxmax, Xxmin, Yxmin);
	if(max_dist < temp){
		max_dist = temp;
	}
	temp = distance(Xxmax, Yxmax, Xymax, Yymax);
	if(max_dist < temp){
		max_dist = temp;
	}
	temp = distance(Xxmin, Yxmin, Xymax, Yymax);
	if(max_dist < temp){
		max_dist = temp;
	}
	printf("%lf", max_dist);
	return 0;
}
