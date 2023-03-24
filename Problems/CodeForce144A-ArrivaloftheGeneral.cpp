#include <bits/stdc++.h>
using namespace std;

int main()
{
    // initally we taking total numbers 
    int n;
    cin >> n;
    // taking maxheight and minheight with respect index also
    int maxheight = 0, minheight = 101, maxindex = 0, minindex = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // current value > maxheight then store value maxheight and index value
        if (x > maxheight)
        {
            maxheight = x;
            maxindex = i;
        }
        // current value <= minheight then store value maxheight and index value
        if (x <= minheight)
        {
            minheight = x;
            minindex = i;
        }
    }
    // compare is maxheight value is bigger than inheight 
    if (maxheight > minheight)
    {
        // print the total count of swaps
        cout << (maxindex - 1) + (n - minindex) - 1;
    }
    else
    {
        // print the total count of swaps
        cout << (maxindex - 1) + (n - minindex);
    }

    return 0;
}
