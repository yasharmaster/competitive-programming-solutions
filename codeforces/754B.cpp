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

int dir[8][2] = { {0, 1}, {1, 1}, {1, 0}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void print_game(int game[4][4]){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout << game[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void play_game(int game[4][4]){
/*	int x = 1, y = 2;
	int xinc, yinc;
	game[x][y] = 2;
	for(int i=0; i<8; i++){
		xinc = dir[i][0];
		yinc = dir[i][1];
		game[x+xinc][y+yinc] = 1;
	}
*/
	int xinc, yinc, nx, ny, nnx, nny;
	bool flag = false;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(game[i][j] == 1){
				for(int d=0; d<8; d++){
					xinc = dir[d][0];
					yinc = dir[d][1];
					nx = i + xinc;
					ny = j + yinc;
					nnx = nx + xinc;
					nny = ny + yinc;
					if(nnx >= 4 || nnx < 0 || nny >= 4 || nny < 0){
						continue;
					}
					if((game[nx][ny] == 1 && game[nnx][nny] == 0) || (game[nx][ny] == 0 && game[nnx][nny] == 1)){
						flag = true;
						break;
					}
				}
				if(flag){
					break;
				}
			}
		}
		if(flag){
			break;
		}
	}
	if(flag){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}

int main(){
	int game[4][4];
	char line[5];
	
	for(int i=0; i<4; i++){
		cin >> line;
		for(int j=0; j<4; j++){
			if(line[j] == '.'){
				game[i][j] = 0;
			}
			else if(line[j] == 'x'){
				game[i][j] = 1;				
			}
			else if(line[j] == 'o'){
				game[i][j] = -1;
			}
			else{
				game[i][j] = 5;
			}
		}
	}
//	print_game(game);
	play_game(game);
	return 0;
}
