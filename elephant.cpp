#include <iostream>
using namespace std;

int  main()
{
    int d, c = 0;
    cin >> d;
    while (d > 0)
    {
        if (d - 5 <= 0)
        {
            d = 0;
            c++;
        }
        else
        {
            d -= 5;
            c++;
        }
        
    }
    cout << c << endl;
    return 0;
}