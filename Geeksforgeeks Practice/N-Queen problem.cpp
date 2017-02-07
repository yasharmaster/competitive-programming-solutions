#include <bits/stdc++.h>
#define DEBUG false

using namespace std;

int n;

int dir[] = {+1, -1};

set<vector<int> > soln;

bool is_safe(vector< vector<int> > &board, int x, int y){
    if(board[x][y]){
        return false;
    }
    for(int i=0; i<n; i++){
        if(board[i][y] || board[x][i]){
            return false;
        }
    }
    int incx, incy;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            incx = dir[i];  incy = dir[j];
            int tx = x+incx, ty = y+incy;
            while(tx<n && tx>=0 && ty<n && ty>=0){
                if(board[tx][ty]){
                    return false;
                }
                tx += incx; ty += incy;
            }
        }
    }
    return true;
}

void save_config(vector< vector<int> > &board){
	vector<int> temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j]){
                temp.push_back(j+1);
                break;
            }
        }
    }
    soln.insert(temp);
}

void clear_board(vector< vector<int> > &board){
	for(int i=0; i<n; i++){
		fill(board[i].begin(), board[i].end(), 0);
	}
}

int queens=0;

bool backtrack(vector< vector<int> > &board, int col){
	if(col>=n){
		save_config(board);
		return true;
	}
    for(int i=0; i<n; i++){
        if(is_safe(board, i, col)){
        	if(DEBUG){
        		cout << "trying queen on " << i << " " << col << endl;
        	}
            board[i][col] = 1;
            if(backtrack(board, col+1)){
                board[i][col] = 0;
                if(DEBUG){
            		cout << "removing queen from " << i << " " << col << endl;
            	}   
            }
            else{
                board[i][col] = 0;
                if(DEBUG){
            		cout << "removing queen from " << i << " " << col << endl;
            	}    
            }
        }
    }
}

void print_all_sol(){
	if(soln.empty()){
		cout << "-1\n";
		return;
	}
	set<vector<int> >::iterator itr = soln.begin();
	for(; itr != soln.end(); itr++){
		cout << "[" ;
		vector<int> temp = *itr;
		vector<int>::iterator it = temp.begin();
		for(; it != temp.end(); it++){
			cout << *it << " ";
		}
		cout << "] ";
	}
	cout << endl;
}

void nqueens_solver(vector< vector<int> > &board){
    backtrack(board, 0);
    print_all_sol();
}

void clear_global_vars(){
    queens=0;
    soln.clear();
}

int main() {
    int t;
    cin >> t;
    while(t--){
        cin>>n;
        vector<int> myvec(n, 0);
        vector<vector<int> > board(n, myvec);
        nqueens_solver(board);
		clear_global_vars();
    }
	return 0;
}