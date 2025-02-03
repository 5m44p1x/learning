/*

template <typename AnyType>     // create a template and named the type as AnyType
void functionName(AnyType &a, AnyType &b);

*/

#include <iostream>

template <typename T>
void Swap(T & a, T & b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << endl;
    cout << "Using compiler-generated int swapper:\n";
    Swap(i, j);
    cout << "i, j = " << i << ", " << j << endl;

    double x = 10.1;
    double y = 20.2;
    cout << "x, y = " << x << ", " << y << endl;
    cout << "Using compiler-generated double swapper:\n";
    Swap(x, y);
    cout << "x, y = " << x << ", " << y << endl;
}