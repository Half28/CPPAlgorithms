#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, t = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if ((a + b + c) >= 2)
        {
            t++;
        }
    }
    cout << t << endl;
}