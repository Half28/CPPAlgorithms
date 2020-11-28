#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int i;
    vector<string> li;
    string newItem;
    cin >> i;
    for (int n = 0; n < i; n++)
    {
        cin >> newItem;
        li.push_back(newItem);
    }
    for (int j = 0; j < li.size(); j++)
    {
        if (li[j].length() > 10)
        {
            cout << li[j].at(0) << li[j].length() - 2 << li[j].at(li[j].length() - 1) << endl;
        }
        else
        {
            cout << li[j] << endl;
        }
    }
    return 0;
}