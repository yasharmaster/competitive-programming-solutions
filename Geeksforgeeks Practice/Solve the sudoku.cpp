#include <bits/stdc++.h>

using namespace std;

bool can_sit(vector<vector<int> > &board, int row, int col, int n){
	for(int i=0; i<9; i++){
		if(board[row][i] == n || board[i][col] == n){
			return false;
		}
	}
	int mrow = row - row%3, mcol = col - col%3;
	for(int i=mrow; i<=mrow+2; i++){
		for(int j = mcol; j<=mcol+2; j++){
			if(board[i][j]==n){
				return false;
			}
		}
	}
	return true;
}

bool backtrack(vector< vector<int> > &board){
	int row=-1, col=-1;
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			if(board[i][j] == 0){
				row = i; col = j;
				break;
			}
		}
		if(row != -1 && col != -1){
			break;
		}
	}
	if(row==-1 && col == -1){
		return true;
	}
	for(int number=1; number<=9; number++){
		if(can_sit(board, row, col, number)){
			board[row][col] = number;
			if(backtrack(board)){
				return true;
			}
			else{
				board[row][col] = 0;
			}
		}
	}
	return false;
}

void print(vector< vector<int> > &board){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cout << board[i][j] << " ";
		}
	}
}

void solve_sudoku(vector< vector<int> > &board){
	if(!backtrack(board)){
		cout << "cannot solve\n";
	}
	else{
		print(board);
		cout << endl;
	}
}

int main(){
	int t, temp;
	cin >> t;
	while(t--){
		vector< vector<int> > board;
		for(int i=0; i<9; i++){
			vector<int> myvector;
			for(int j=0; j<9; j++){
				cin >> temp;
				myvector.push_back(temp);
			}
			board.push_back(myvector);
		}
		solve_sudoku(board);
	}
	return 0;
}