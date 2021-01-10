//Sum of series1
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number :";
    cin >> num;
    float sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += 1 / float(i);
    }
    cout << "Sum of series is : " << sum;
    return 0;
}