#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << (j + 1);
        }

        for(int k = 0; k < (n - i - 1); k++)
        {
            cout << " ";
        }

        for(int l = 0; l < (n - i - 1); l++)
        {
            cout << " ";
        }

        // for(int l = 0; l < (2*(n-i) - 2); l++)
        // {
        //     cout << " ";
        // }

        for(int m = 0; m <= i; m++)
        {
            // cout << ((n - m - (n - 1)) + i);
            cout << (i - m + 1); 
        }

        // for(int m = (i + 1); m >= 1; m--)
        // {
        //     cout << m;
        // }
        cout << endl;
    }

    return 0;
}