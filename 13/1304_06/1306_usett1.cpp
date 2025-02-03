#include <iostream>
#include "1304_tabtenn1.h"

int main(void)
{
    using std::cout;
    using std::endl;

    TableTennisPlayer player1("Chuck", "Blizzard", true);
    RatedPlayer player2(1110, "Tara", "Boomdea", false);
    player1.Name();
    if(player1.HasTable())
    {
        cout << ": has a table.\n";
    }
    else
    {
        cout << ": hasn't a table.\n";
    }
    player2.Name();
    if(player2.HasTable())
    {
        cout << ": has a table.\n";
    }
    else
    {
        cout << ": hasn't a table.\n";
    }
    player2.Name();
    cout << "; Rating: " << player2.Rating() << endl;
    RatedPlayer player3(1111, player2);
    player3.Name();
    cout << "; Rating: " << player3.Rating() << endl;

    TableTennisPlayer & rrp = player3;
    TableTennisPlayer * prp = &player3;
    rrp.Name();
    cout << ", from rrp" << endl;
    prp->Name();
    cout << ", from prp" << endl;
    Show(player1);
    Show(&player1);

    return 0;
}