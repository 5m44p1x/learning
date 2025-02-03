#include <iostream>

int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;   // reference works like const *, and needs to be initialized when it is created, and not poiting to others

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    int bunnies = 50;
    rodents = bunnies;  // reference does not change after initialization
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies address = " << &bunnies;
    cout << ", roddents address = " << &rodents << endl;

    return 0;
}