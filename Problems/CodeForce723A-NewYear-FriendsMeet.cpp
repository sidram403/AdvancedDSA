// problem link : https://codeforces.com/problemset/problem/723/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // read the three friends meeting point
  int x1,x2,x3;
  cin>>x1>>x2>>x3;
  // Calculate the distance between the three friends points 
  int d1 = abs(x1 - x2);
  int d2 = abs(x2 - x3);
  int d3 = abs(x3 - x1);
  // find the minimum distance from the all distance of above 
  int d4 = min(min(d1,d2),d3);
  // make the minimum distance as double because 2 friends go and meet at the remaining 1 person point.
  int ans = d4 * 2;
  cout<<ans<<endl;
   return 0;
}


--Input--
7 1 4

--Output--
6  
  
  
