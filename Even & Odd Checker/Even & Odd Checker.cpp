#include <iostream>
using namespace std;

int main()
{
    cout << "==================\n";
    cout << "Even & Odd Checker\n";
    cout << "==================\n";

    int num;

    cout << "Enter Number : ";
    cin >> num;

    if (num % 2 != 0)
        cout << "This Number Is Odd\n";
    else
        cout << "This Number Is Even\n";
    return 0;
}