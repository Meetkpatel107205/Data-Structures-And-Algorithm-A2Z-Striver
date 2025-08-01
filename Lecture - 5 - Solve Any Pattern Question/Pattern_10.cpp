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
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (n - i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < 2*n - 1; i++)
    {
        int stars;

        if(i < n)
        {
            stars = i + 1;
        }
        else
        {
            stars = 2*n - 1 - i;
        }

        for(int j = 0; j < stars; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}