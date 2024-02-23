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
    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < n; j++)
        {

            if (number[i] == number[j]){
                break;
            }
            

             else
             { cout << number[i] << "\n";
             break;

             }
            
        }
    }

    return 0;
}
