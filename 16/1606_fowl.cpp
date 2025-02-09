#include <iostream>
#include <string>
#include <memory>

using namespace std;

unique_ptr<string> demo(const char * s)
{
    unique_ptr<string> temp(new string(s));
    return temp;
}

int main()
{
    shared_ptr<string> films[5] =
    {
        auto_ptr<string> (new string("Fowl Balls")),
        auto_ptr<string> (new string("Duck walks")),
        auto_ptr<string> (new string("Chiken runs")),
        auto_ptr<string> (new string("Turkey errors")),
        auto_ptr<string> (new string("Goose eggs"))
    };

    // auto_ptr<string> pwin; // failed
    shared_ptr<string> pwin;
    pwin = films[2];

    cout << "The nominees for best avian baseball film are\n";
    for (int i = 0; i < 5; i++)
    {
        cout << *films[i] << endl;
    }
    cout << "The winner is " << *pwin << "!\n";
    cin.get();

    unique_ptr<string> ps1, ps2;
    ps1 = demo("need to use move()");
    ps2 = move(ps1);
    return 0;
}