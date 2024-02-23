#include <iostream>
using namespace std;

int main()
{

    int n, number[500];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> number[i];
        if (number[i] != number[i - 1])
        {
            cout << " ";
            cout << number[i];
        }
    }

    return 0;
}
