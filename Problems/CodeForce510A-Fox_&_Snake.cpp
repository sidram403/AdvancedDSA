#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initially we read values from user
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) 
    {   
        // if row % 4 == 0 or 2 print all value as '#'
        if (i % 4 == 0 || i % 4 == 2)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        // if row % 4 == 1 print '.' upto (m-1) position and last position will be '#' 
        if (i % 4 == 1)
        {
            for (int j = 0; j < m - 1; j++)
            {
                cout << ".";
            }
            cout << "#";
            cout << endl;
        }
        // if row % 4 == 3 print first position as '#' and remaining all are '.'
        if (i % 4 == 3)
        {
            cout << "#";
            for (int j = 1; j < m; j++)
            {

                cout << ".";
            }
            cout << endl;
        }
    }

    return 0;
}
