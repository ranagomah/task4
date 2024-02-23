#include <iostream>
using namespace std;

int main()
{

    int n, cnt,maxC=0,maxr,numbers[200];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cnt=0;
        for (int j = 0; j < n; j++)
        {
            if (numbers[i]==numbers[j])
            {
                cnt++;
            } 
        }
        if (cnt>maxC)
        {
            maxC=cnt;
            maxr=numbers[i];
            
        }   
    }
    cout<<maxr;
    return 0;
}