#include <iostream>
using namespace std;

int main()
{
    int k, n, w, d = 0;
    cin >> k >> n >> w;
    for (int i = 0; i < w; i++)
    {
        d += k * (i + 1);
        cout << "D value: " << d << endl;
    }
    if (n >= d)
    {
        cout << 0 << endl;
    }
    else 
    {
        cout << abs(n - d) << endl;
    }
    return 0;
}