#include <iostream>
using namespace std;

int main()
{
    int n, number[1000];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> number[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (number[i] == number[n - i - 1])
        {
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}


