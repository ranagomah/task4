#include <iostream>
using namespace std;

int main()
{

    int n, numbers[200];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }
    int num;
    cin >> num;
    int f=-1;
    for (int i = n - 1; i < n; --i)
    {
        if (numbers[i] == num)
        {
          f=i;
            break;}
        
    }
cout<<f;
    return 0;
}