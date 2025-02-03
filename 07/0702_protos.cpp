#include <iostream>

void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}

void cheers(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Cheers! ";
    }
    std::cout << std::endl;
}

int bigger(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

double cube(double x)
{
    return x * x * x;
}

int main()
{
    using namespace std;
    cout << "main() will call the simple() function:\n";
    simple();
    cheers(3);
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2));
    cout << "the bigger one is: " << bigger(3, 5) << endl;
    cout << "cubic x is: " << cube(2.0) << endl;
    cout << "main() is finished with the simple() function.\n";
    return 0;
}