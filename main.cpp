#include <iostream>
#include "string"
using namespace std;

int ReadLine()
{
    int current;
    cin >> current;
    return current;
}

char Read_Char()
{
    char current;
    cin >> current;
    return current;
}

int Сalculation (int &first_number, int &second_number, char &operation)
{
    int sum;
    if (operation == '+')
    {
        sum = first_number + second_number;
        return sum;
    }

    if (operation == '-')
    {
        sum = first_number - second_number;
        return sum;
    }

    if (operation == '/')
    {
        sum = first_number / second_number;
        return sum;
    }

    if (operation == '*')
    {
        sum = first_number * second_number;
        return sum;
    }

    if (operation == '%')
    {
        sum = first_number % second_number;
        return sum;
    }
    else
    {
        cout << "ERROR"s << endl;
        return sum;
    }

}

int main()
{
    cout << "Hello this is calculator by Gosama"s << endl;

    cout << "Enter first number" << endl;

    int first_number = ReadLine();

    cout << "What operation to perform?"s <<endl;

    char operation = Read_Char();

    cout << "Enter second number" << endl;

    int second_number = ReadLine();

    cout << first_number << ' ' << operation << ' ' << second_number << " = " << Сalculation(first_number, second_number, operation);

}