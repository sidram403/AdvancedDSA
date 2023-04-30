#include <iostream>

using namespace std;

int main()
{
   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<2;i++){
        int temp = arr[0];
        for(int j=0;j<n-1;j++){
           arr[j]=arr[j+1]; 
        }
        arr[n-1] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   

    return 0;
}


Input : 5
        2 7 11 4 -2
  
Output : 11 4 -2 2 7  
  
