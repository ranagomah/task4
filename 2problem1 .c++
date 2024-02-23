#include <iostream>
using namespace std;


int main()
{

    int n, number[200];
    while (true)
    {
        printf("enter n > 2 : ");
            cin >> n;
            if (n>=3)
            {
                break;
            }      
    }
    
    int min1, min2, min3;
    min1 = 20000;
    min2 = 30000;
    min3 = 10000;
    for (int i = 0; i < n; ++i)
    {
        cin >> number[i];
    }

    for (int i = 0; i < n; ++i)
    {

        if (min1 > number[i])
        {

            min1 = number[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (min2 > number[i] && number[i] != min1)
        {
            min2 = number[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (min3 > number[i] &&  number[i] != min1 &&  number[i] != min2)
        {
            min3 = number[i];
        }
    }
    cout << min1 << " " << min2 << " " << min3;
    return 0;
}
