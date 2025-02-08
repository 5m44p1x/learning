#include <iostream>
#include <cmath>
#include <string>
#include "1510_exc_mean.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class demo
{
private:
    string word;
public:
    demo(const string & str)
    {
        word = str;
        cout << "demo " << word << " created\n";
    }
    ~demo()
    {
        cout << "demo " << word << " destroyed\n";
    }
    void show() const
    {
        cout << "demo " << word << " lives!\n";
    }
};

double hmean(double a, double b)
{
    if (a == -b)
    {
        throw bad_hmean(a, b);
    }
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
    {
        throw bad_gmean(a, b);
    }
    return std::sqrt(a * b);
}

double means(double a, double b)
{
    double am, hm, gm;
    demo d2("found in means()");
    am = (a + b) / 2.0;
    try
    {
        hm = hmean(a, b);
        gm = gmean(a, b);
    }
    catch (bad_hmean & bh)
    {
        bh.mesg();
        cout << "Caught in means()\n";
        throw;
    }
    d2.show();
    return (am + hm + gm) / 3.0;
}

int main()
{
    double x, y, z;
    {
        demo d1("found in block main()");
        cout << "Enter two numbers: ";
        while (cin >> x >> y)
        {
            try
            {
                z = means(x, y);
                cout << "The mean of " << x << " and " << y << " is " << z << endl;
                cout << "Enter next pair: ";
            }
            catch (bad_hmean & bh)
            {
                bh.mesg();
                cout << "Try again.\n";
                cout << "Enter next set of numbers <q to quit>: ";
                continue;
            }
            catch (bad_gmean & bg)
            {
                cout << bg.mesg();
                cout << "Values used: " << bg.v1 << ", " << bg.v2 << endl;
                cout << "Sorry, you don't get to play any more.\n";
                break;
            }
        }
        d1.show();
    }
    cout << "Bye!\n";
    cin.get();
    cin.get();
    return 0;
}