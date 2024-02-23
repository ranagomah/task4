

#include <iostream>
using namespace std;
int main()
{
    int a,f;
    cin >> a;
    for (int i=a; i > 1; i--)
    {
        f=0;
        for (int b=2; b < i; ++b)
        {
            if (i % b == 0)
            {
                f=1;
            }
        }
        if (f==0)
        {
        cout << i << "\n";
        }
        
    }

    return 0;
}