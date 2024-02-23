#include <iostream>
using namespace std;
int main()
{
    int n, arr[200], min, max, maxi, mini,temp;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    max = arr[0];
    min = arr[0];
maxi=0;
mini=0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxi = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            mini = i;
        }
    }
    temp =arr[mini];
    arr[mini]=arr[maxi];
    arr[maxi]=temp;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i]<<"\t";
    }
    return 0;
}