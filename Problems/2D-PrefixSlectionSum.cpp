#include <bits/stdc++.h>
using namespace std;


int main() {
	int rows, cols;
	cin>>rows>>cols;
	vector<vector<int>> org_arr(rows,vector<int>(cols,0));
	for(int row_index = 0; row_index < rows; row_index++){
	    for(int col_index = 0; col_index < cols; col_index++){
	      cin>>org_arr[row_index][col_index];
	   }
	}
	vector<vector<int>> cum_arr(rows,vector<int>(cols,0));
	cum_arr[0][0] = org_arr[0][0];
	for(int var_col = 1; var_col < cols; var_col++){
	    cum_arr[0][var_col] = cum_arr[0][var_col-1] + org_arr[0][var_col];
	}
	for(int var_row = 1; var_row < rows; var_row++){
	    cum_arr[var_row][0] = cum_arr[var_row-1][0] + org_arr[var_row][0];
	}
	for(int row_index = 1; row_index < rows; row_index++){
	    for(int col_index = 1; col_index < cols; col_index++){
	      cum_arr[row_index][col_index] = cum_arr[row_index][col_index-1] + cum_arr[row_index-1][col_index] - cum_arr[row_index-1][col_index-1] + org_arr[row_index][col_index];
	      
	   }
	}
	
	int start_row, start_col, end_row, end_col;
	cin>>start_row>>start_col>>end_row>>end_col;
	if(start_row==0 && start_col==0){
	    cout<<cum_arr[end_row][end_col]<<endl;
	}else if(start_row==0){
	    cout<<cum_arr[end_row][end_col] - cum_arr[end_row][start_col-1]<<endl;
	}else if(start_col==0){
	    cout<<cum_arr[end_row][end_col] - cum_arr[start_row-1][end_col]<<endl;
	}else{
	    cout<<cum_arr[end_row][end_col] - cum_arr[end_row][start_col-1] - cum_arr[start_row-1][end_col] + cum_arr[start_row-1][start_col-1];
	}
	
}

--input--
3 3
1 5 3
7 6 2
4 9 8
0 1 0 2 
  
--output--
8  
