#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int d=0;
    string s;
    for (int i=0; i<n; i++)
    {
        cin >> s;
        if (s=="++X" || s=="X++")
        {
            d++;
        }
        else
        {
            d--;
        }
    }
    cout << d;
    return 0;
}