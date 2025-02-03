#include <iostream>

extern double warming;

void update(double dt);
void local();

using std::cout;

void update(double dt)
{
    warming += dt;
    cout << "Updating global warming to " << warming;
    cout << " degrees.\n";
}

void local()
{
    double warming = 0.8;
    cout << "Local warming = " << warming << " degrees.\n";
    cout << "But global warming = " << :: warming;  // scope resolution operator, here it means the global variable will be used here
    cout << " degrees.\n";
}
