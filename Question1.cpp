//Sum and product of digits of a number
#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, prod = 1;
    cout << "Enter a number :";
    cin >> num;
    while (num > 0)
    {
        int lastdig = num % 10;
        sum += lastdig;
        prod *= lastdig;
        num /= 10;
    }
    cout << "Sum is : " << sum << endl
         << "Product is : " << prod;
    return 0;
}