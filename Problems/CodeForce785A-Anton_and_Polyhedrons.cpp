#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initially we take number of test cases
    int n;
    cin >> n;
    int sum = 0;
    while (n--)
    {
        // read 's' as string variable 
        string s;
        cin >> s;
        // compare 0th value as string in "Tetrahedron" character , if it is equal add '4' to sum
        if (s[0] == 'T')
        {
            sum += 4;
        }
        // compare 0th value as string in "Cube" character , if it is equal add '6'to sum
        else if (s[0] == 'C')
        {
            sum += 6;
        }
        // compare 0th value as string in "Octahedron" character , if it is equal add '8'to sum
        else if (s[0] == 'O')
        {
            sum += 8;
        }
        // compare 0th value as string in "Dodecahedron" character , if it is equal add '12' to sum
        else if (s[0] == 'D')
        {
            sum += 12;
        }
        // compare 0th value as string in "Icosahedron" character , if it is equal add '20' to sum
        else
        {
            sum += 20;
        }
    }
    // print total sum value
    cout << sum << endl;

    return 0;
}
