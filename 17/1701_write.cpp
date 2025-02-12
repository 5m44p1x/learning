#include <iostream>
#include <cstring>

int main()
{
    using std::cout;
    using std::endl;

    const char * state1 = "FGHIJ";
    const char * state2 = "KLMNOP";
    const char * state3 = "EFGHIJk";
    int len = std::strlen(state2);
    int i;

    cout << "Decreasing loop index:\n";
    for (i = len; i > 0; i--)
    {
        cout.write(state2, i) << endl;
    }

    cout << "Increasing loop index:\n"; // this outputs wrongly
    for (i = 1; i <= len; i++);
    {
        cout.write(state2, i) << endl;
        // cout << endl;
    }

    cout << "Exceeding string length:\n";
    cout.write(state2, len + 5) << endl;

    return 0;
}
