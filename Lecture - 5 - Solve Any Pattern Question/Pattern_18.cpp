#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j >= 0; j--)
        {
            cout << char(65 + (n - j - 1));
        }

        // for(char ch = 'E' - i; ch <= 'E'; ch++)
        // {
        //     cout << ch;
        // }
        cout << endl;
    }

    return 0;
}