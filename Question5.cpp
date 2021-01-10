#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
void palindrome(string inp)
{
    string orig = inp;
    reverse(inp.begin(), inp.end());
    if (orig == inp)
    {
        cout << "Palindrome.\n";
    }
    else
    {
        cout << "Not Palindrome.\n";
    }
    return;
}
int main()
{
    string inp;
    cout << "Enter the string : ";
    cin >> inp;

    palindrome(inp);

    system("pause");
    return 0;
}