//Swapping numbers using macro
#include <iostream>
#define swapnos(a, b) \
    {                 \
        int temp = a; \
        a = b;        \
        b = temp;     \
    }
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers :";
    cin >> a >> b;
    swapnos(a, b);
    cout << "The numbers after swapping are :" << a << " and " << b << endl;
    system("pause");
    return 0;
}
