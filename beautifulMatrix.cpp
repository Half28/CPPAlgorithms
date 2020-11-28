#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, r, o;
    for (int i = 0; i < 5; i++)
    {
        cin >> a >> b >> c >> d >> e;
        if (a > 0)
        {
            o = 0;
            r = i;
        }
        if (b > 0)
        {
            o = 1;
            r = i;
        }
        if (c > 0)
        {
            o = 2;
            r = i;
        }
        if (d > 0)
        {
            o = 3;
            r = i;
        }
        if (e > 0)
        {
            o = 4;
            r = i;
        }
    }
    int result = abs(3 - (o+1)) + abs(3 - (r+1));
    cout << result << endl;
    return 0;
}