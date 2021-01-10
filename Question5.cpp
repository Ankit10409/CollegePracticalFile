#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string inp, org;
    cout << "Enter the string : ";
    cin >> inp;
    org = inp;
    reverse(inp.begin(), inp.end());
    if (org == inp)
    {
        cout << "Palindrome.\n";
    }
    else
    {
        cout << "Not Palindrome.\n";
    }
    system("pause");
    return 0;
}