#include <iostream>
using namespace std;

int main()
{

    int n, numbers[200], a;
    cin >> n;
    int freq[10] = {0};
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; ++i)
    {

        while (numbers[i])
        {
            a = numbers[i] % 10;
            numbers[i] /= 10;
            freq[a]++;
        }
    }
        for (int i = 0; i < 10; ++i)
    {
        cout <<i <<" "<< freq[i]<<endl;
    }


    return 0;
}