#include <iostream>

int main()
{
    using std::cout;

    cout.fill('*'); // set up default fill character, default one is space
    const char * staff[2] = {"Waldo whipsnade", "Wilmarie Wooper"};
    long bonus[2] = {900, 1500};

    for (int i = 0; i < 2; i++)
    {
        cout << staff[i] << ": $";
        cout.width(7);
        cout << bonus[i] << '\n';
    }
    return 0;
}