#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    
    int maxDominos = (M * N) / 2;
    
    cout << maxDominos << endl;
    
    return 0;
}