#include <iostream>

void oil(int x)
{
    using namespace std;

    int texas = 5;
    cout << "In oil(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In oil(), x = " << x << ", &x = " << &x << endl;

    {   // a block
        int texas = 13;
        cout << "In block, texas = " << texas << ", &texas = ";
        cout << &texas << endl;
        cout << "In block, x = " << x << ", &x = " << &x << endl;
    }
    cout << "Post-block, texas = " << texas;
    cout << ", &texas = " << &texas << endl;
}

int main()
{
    using namespace std;

    int texas = 31;
    int year = 2011;
    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << ", &year = " << &year << endl;

    oil(texas);
    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << ", &year = " << &year << endl;

    return 0;
}