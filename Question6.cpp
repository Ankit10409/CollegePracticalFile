#include <iostream>
#include <cmath>
using namespace std;

void prime(int num)
{

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return;
        }
    }
    cout << num << " ";
    return;
}
int main()
{
    int num;
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        prime(i);
    }
    cout << endl;
    system("pause");
    return 0;
}