#include <iostream>
#include "1107_mytime2.h"

int main()
{
    using std::cout;
    using std::endl;
    Time weeding(2, 40);
    Time waxing(5, 55);
    Time total;
    Time diff;
    Time adjusted;

    cout << "weeding time = ";
    weeding.Show();
    cout << endl;

    cout << "waxing time = ";
    waxing.Show();
    cout << endl;

    total = weeding + waxing;
    cout << "total work time = ";
    total.Show();
    cout << endl;

    diff = weeding - waxing;
    cout << "diff time = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;
    cout << "adjusted time = ";
    adjusted.Show();
    cout << endl;

    return 0;
}