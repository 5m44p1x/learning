#include <iostream>
using namespace std;

unsigned int c_int_str(const char * str, char ch)
{
    unsigned int count = 0;
    unsigned int pos = 0;
    while (*str)
    {
        if (*str == ch)
        {
            count++;
        }
        pos++;
        str++;
    }
    cout << "position is " << pos << endl;
    return count;
}

int main()
{
    char mmm[15] = "minimum";
    char * wall = "ululate";
    unsigned int ms = c_int_str(mmm, 'm');
    unsigned us = c_int_str(wall, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wall << endl;
    return 0;
}