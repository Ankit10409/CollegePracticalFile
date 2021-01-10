//reverse a number
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number :";
    cin >> num;
    int lsdig, rev = 0;
    while (num > 0)
    {
        lsdig = num % 10;
        rev = rev * 10 + lsdig;
        num /= 10;
    }
    cout << "Reverse number is : " << rev;
    return 0;
}