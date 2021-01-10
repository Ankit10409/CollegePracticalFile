//factors of a given number
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "The factors are :\n";
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    system("pause");
    return 0;
}