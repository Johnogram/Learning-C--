#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int firstNumber;
    int secondNumber;

    cout << "Enter a number: ";
    cin >> firstNumber;
    cout << "You entered " << firstNumber << ". Enter another number: ";
    cin >> secondNumber;

    if (firstNumber < secondNumber)
    {
        cout << firstNumber << " is less than " << secondNumber;
    }

    if (firstNumber == secondNumber)
    {
        cout << firstNumber << " is equal to " << secondNumber;
    }

    if (firstNumber > secondNumber)
    {
        cout << firstNumber << " is greater than " << secondNumber;
    }
}
