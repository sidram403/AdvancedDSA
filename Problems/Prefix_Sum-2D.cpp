// 2D Prefix Sum Optimized solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initially read the size of row and col , here we taking 3x3
    int rows, cols;
    cin >> rows >> cols;
    // 2D vector array initially all elements are '0'
    vector<vector<int>> arr(rows, vector<int>(cols, 0));
    // taking all the elements value from user
    for (int row_index = 0; row_index < rows; row_index++)
    {
        for (int col_index = 0; col_index < cols; col_index++)
        {
            cin >> arr[row_index][col_index];
        }
    }
    // created 2D vector cumalative array initially all elements are '0'
    vector<vector<int>> cum_arr(rows, vector<int>(cols, 0));
    cum_arr[0][0] = arr[0][0];
    // Here we doing cumalative sum for first row
    for (int cum_col_index = 1; cum_col_index < cols; cum_col_index++)
    {
        cum_arr[0][cum_col_index] = cum_arr[0][cum_col_index - 1] + arr[0][cum_col_index];
    }
    //  Here we doing cumalative sum for first coulmn
    for (int cum_row_index = 1; cum_row_index < rows; cum_row_index++)
    {
        cum_arr[cum_row_index][0] = cum_arr[cum_row_index - 1][0] + arr[cum_row_index][0];
    }
    // Here we doing cumulative sum for remaining elements
    for (int row_index = 1; row_index < rows; row_index++)
    {
        for (int col_index = 1; col_index < cols; col_index++)
        {
            cum_arr[row_index][col_index] = cum_arr[row_index][col_index - 1] + cum_arr[row_index - 1][col_index] - cum_arr[row_index - 1][col_index - 1] + arr[row_index][col_index];
        }
    }
    // printing the cumulative sum for the array
    for (int cum_row_index = 0; cum_row_index < rows; cum_row_index++)
    {
        for (int cum_col_index = 0; cum_col_index < cols; cum_col_index++)
        {
            cout << cum_arr[cum_row_index][cum_col_index] << " ";
        }
        cout << endl;
    }
}
