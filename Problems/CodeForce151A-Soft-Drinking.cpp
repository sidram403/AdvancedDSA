// problem link : https://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Initially read all the requaried inputs sequencially
  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  // make ensure that to make toast, required to calculate total_drinks , total_slices and total_salts friend have
  int total_drinks = k * l/nl;
  int total_slices = c * d;
  int total_salts = p/np;
  // finally we need to calculate the output by taking the minimum value of them and that value dividing the number of friends are there
  int ans = min(min(total_drinks, total_slices), total_salts)/n;
  cout<<ans<<endl;
   return 0;
}

--Input--
3 4 5 10 8 100 3 1

--Output--
2  
