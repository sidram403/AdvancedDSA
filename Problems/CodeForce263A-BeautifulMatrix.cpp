#include <bits/stdc++.h>
using namespace std;

int main() {
//  initially we take 5x5 Matrix size of 6 for both row and col, because we start index value from 1 to 5 
  int arr[6][6],i,j,row,col;
  for(i=1;i<6;i++){
      for(j=1;j<6;j++){
          cin>>arr[i][j]; // read all element of the matrix
      //  Compare current element equal to 1         
          if(arr[i][j] == 1){
             // calculate the move values by row if '2' in the first row we need to move third row so we required (3 - 2) is '1' move.
              row = abs(3 - i); 
            // calculate the move values by col if '1' in the second col we need to move third col so we required (3 - 1) is '2' moves.
              col = abs(3 - j);  
            // total moves will be sum of the row and col moves i.e (1+2) so total '3' moves.
              cout<<row+col; 
          }
      }
     
  }
   return 0;
}
