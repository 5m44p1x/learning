#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

template<class T>
class TooBig
{
private:
    T cutoff;
public:
    TooBig(const T & t) : cutoff(t) {};
    bool operator()(const T & v) {return v > cutoff;}
};

void outint(int n) {cout << n << " ";}

int main()
{
    TooBig<int> f100(100);
    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 200};
    list<int> yadayada(vals, vals + 10);
    list<int> etcetera(vals, vals + 10);
    // or the following in C++11
    // list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 200};
    // list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 200};

    cout << "Original lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    yadayada.remove_if(f100);
    etcetera.remove_if(TooBig<int>(199));
    cout << "Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
    return 0;
}