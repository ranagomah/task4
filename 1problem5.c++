#include <iostream>
using namespace std;

int main()
{
    int n, number[200];
    cin >> n;
    int min = 10000;
    for (int i = 0; i < n; ++i)
    {
        cin >> number[i];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        {
            for (int j = i + 1; j < n; ++j)
            {
                int tmp = number[i] + number[j] + j - i;
                if (min > tmp)
                {
                    min = tmp;
                }
            }
        }
    }
    cout << min;
    return 0;
}