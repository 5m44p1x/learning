#include <iostream>
#include <exception>

int main()
{
    using namespace std;

    cin.exceptions(ios_base::failbit);
    cout << "Enter numbers: ";
    int sum = 0;
    int input;
    try
    {
        while (cin >> input)
        {
            sum += input;
        }
    }
    catch (ios_base::failure & fb)
    {
        cout << fb.what() << endl;
        cout << "O! the horror!\n";
    }
    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;
    // while (cin >> input)
    // {
    //     sum += input;
    // }
    // cout << "Last value entered = " << input << endl;
    // cout << "Sum = " << sum << endl;
    // if (cin.fail() && !cin.eof())
    // {
    //     cin.clear();
    //     while (!isspace(cin.get()))
    //     {
    //         continue;
    //     }
    // }
    // else
    // {
    //     cout << "I cannot go on!\n";
    //     exit(1);
    // }
    // cout << "Now enter a new number: ";
    // cin >> input;
    return 0;
}