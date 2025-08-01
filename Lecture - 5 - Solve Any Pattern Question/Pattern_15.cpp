#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int count = 65;

    for(int i = 0; i < n; i++)
    {
        for(int j = n; j > i; j--)
        {
            cout << char(count + (n - j));
        }

        // for(char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        // {
        //     cout << ch;
        // }
        cout << endl;
    }

    return 0;
}