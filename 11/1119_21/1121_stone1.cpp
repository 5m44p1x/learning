#include <iostream>
#include "1119_stonewt1.h"

int main()
{
    using std::cout;

    Stonewt poppins(9, 2.8);
    auto p_wt = double(poppins);
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int(poppins) << " pounds.\n";

    return 0;
}