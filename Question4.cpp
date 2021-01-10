#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            sum -= i;
        else
            sum += i;
    }
    cout << "Sum of the Series is : " << sum << endl;
    system("pause");
    return 0;
}