#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int firstNumber;
    int secondNumber;

    bool keepGoing = true;
    int answer;

    while (keepGoing)
    {
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

        cout << "\n\n";
        cout << "Continue? (1 = Yes, 0 = No) ";
        cin >> answer;

        if (answer == 0)
        {
            keepGoing = false;
        }
    }
}
