#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int count = 65;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << char(count + j);
        }
        cout << endl;
    }

    return 0;
}