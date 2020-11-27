#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool checkForPalindrome(string s)
{
    string o = s;
    reverse(o.begin(), o.end());
    if (s == o)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    string str = "racecar";
    if (checkForPalindrome(str))
    {
        cout << "String is palindrome." << endl;
        return 0;
    }
    else 
    {
        cout << "String is not palindrome." << endl;
        return 0;
    }
}