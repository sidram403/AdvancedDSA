//Problem : https://codeforces.com/problemset/problem/1352/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // read all the test cases     
    int t;
    cin >> t;
    while (t--)
    {   
       // Initially we take as string 
        string s;
        cin >> s;
        int n = s.size(); //  size of the string 's'
        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                arr[i] = 0; // here we storing zero value contained strings
            }
            else
            {
                arr[i] = 1; // here we storing non-zero value contained strings as '1'
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                count++; // here we counting the number of rounded sum
            }
        }
        cout << count << endl;

        int k = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                cout << ((int(s[i] - '0')) * k) << " "; // if string is non-zero value, then we converting to int and multipling the 'k' value
                k *= 10; // every time we multpliying 'k' value for print seperate rounded value
            }
            else
            {
                k *= 10; // every time we multpliying 'k' value for print seperate rounded value
            }
        }
        cout << endl;
    }
    return 0;
}


--input--
5
5009
7
9876
10000
10

--output--
2
9 5000 
1
7 
4
6 70 800 9000 
1
10000 
1
10 
