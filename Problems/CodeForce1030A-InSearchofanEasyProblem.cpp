#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // taking elements one by one
        int q;
        cin >> q;
        // if query is 0 , then count is 0
        if (q == 0)
        {
            count = 0;
        }
        // if the query is 1, then count is 1
        else
        {
            count = 1;
        }
    }
    // if the any of the count is 1, then print 'Hard' as answer
    if (count == 1)
    {
        cout << "Hard";
    }
    // else print 'Easy'
    else
    {
        cout << "Easy";
    }

    return 0;
}
