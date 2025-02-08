#include <iostream>
using namespace std;

int main()
{
    int n, k, d = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int c = a[k-1];
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] >= c)
        {
            d++;
        }
    }
    
    cout << d;
    return 0;
}