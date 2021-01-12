#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number for series : \n";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        int j;
        for (j = num; j > i; j--)
        {
            cout << " ";
        }
        for (j; j > 0; j--)
        {
            cout << "*";
        }
        for (j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}