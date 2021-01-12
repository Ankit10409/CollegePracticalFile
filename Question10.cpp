#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
void input(int a[], int size) //function to take input for the array
{
    system("cls");
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}
int menu() //function to take input for what user wants to do
{
    int choice;
    do
    {
        system("cls");
        cout << "Choose One of the following options :\n";
        cout << "1-Print the even-valued elements\n";
        cout << "2-Print the odd-valued elements\n";
        cout << "3-Calculate and print the sum and average of the elements of array\n";
        cout << "4-Print the maximum and minimum element of array\n";
        cout << "5-Remove the duplicates from the array\n";
        cout << "6-Print the array in reverse order\n";
        cout << "7-Enter the elements of the array again\n";
        cout << "8-Quit the program\n";
        cin >> choice;
    } while (choice > 8 || choice < 1);
    return choice;
}
void printeven(int a[], int size) //function to print all the even valued elements in the array
{
    system("cls");
    cout << "The even valued elements are :";
    int i = 0;
    for (i; i < size; i++)
    {
        if (a[i] % 2 == 0)
            cout << a[i] << " ";
    }
    cout << endl;
    system("pause");
    return;
}
void printodd(int a[], int size) //function to print all the odd valued elements
{
    system("cls");
    cout << "The odd valued elements are :";
    int i = 0;
    for (i; i < size; i++)
    {
        if (a[i] % 2 != 0)
            cout << a[i] << " ";
    }
    cout << endl;
    system("pause");
    return;
}
void sumavg(int a[], int size) //function to print the sum and average of the elements in the array
{
    system("cls");
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    float avg = float(sum) / size;
    cout << "The sum of array is : " << sum << endl
         << "The average of the array is : " << avg << endl;
    system("pause");
    return;
}
void maxmin(int a[], int size) //function to output the maximum and minimum values entered in th earray
{
    system("cls");
    int maxnum = INT_MIN;
    int minnum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        maxnum = max(a[i], maxnum);
        minnum = min(a[i], minnum);
    }
    cout << "The maximum element is : " << maxnum << endl
         << "The minimum element is : " << minnum << endl;
    system("pause");
    return;
}
void removeduplicate(int arr[], int size) //function to remove all the duplicate entries in the array
{
    system("cls");
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
            if (temp[i] == temp[j])
                temp[j] = -1;
    }
    for (int i = 0; i < size; i++)
    {
        if (temp[i] != -1)
        {
            cout << temp[i] << " ";
        }
    }
    cout << endl;
    system("pause");
    return;
}
void printrev(int a[], int size)
{
    system("cls");
    cout << "The reversed array is : ";
    for (int i = size - 1; i > 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    system("pause");
    return;
}
int main()
{
    system("cls");
    int num;
    cout << "Enter length of array :";
    cin >> num;

    int arr[num];
    input(arr, num); //taking input for array

    int choice;
    choice = menu(); //taking the choice from user

    switch (choice)
    {
    case 1:
        printeven(arr, num); //print even valued elements in the array
        break;
    case 2:
        printodd(arr, num); //print odd valued elements in the array
        break;
    case 3:
        sumavg(arr, num); //printing the sum and average of the array elements
        break;
    case 4:
        maxmin(arr, num); //printing the maximum and minimum values in the array
        break;
    case 5:
        removeduplicate(arr, num); //remove duplicate entries in the array
        break;
    case 6:
        printrev(arr, num); //printing the reverse array
        break;
    case 7:
        input(arr, num); //taking input again for the array
        break;
    case 8:
        system("cls");
        return 0; //quitting the program
    }
    system("cls");
    return 0;
}