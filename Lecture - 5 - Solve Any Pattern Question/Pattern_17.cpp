#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int count = 65;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        for(int k = 0; k <= i; k++)
        {
            cout << char(count + k);
        }

        for(int l = (i - 1); l >= 0; l--)
        {
            cout << char(count + l);
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        char ch = 'A';
        int breakPoint = (((2*i) + 1)/2);

        for(int k = 0; k < ((2*i) + 1); k++)
        {
            cout << ch;
            if(k < breakPoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        cout << endl;
    }

    return 0;
}