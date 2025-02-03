#include <iostream>
#include "1304_tabtenn1.h"

TableTennisPlayer::TableTennisPlayer (const string & fn, const string & ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht)
{
}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}

void Show(const TableTennisPlayer & tp)
{
    using std::cout;
    cout << "Name: ";
    tp.Name();
    cout << "\nTable: ";
    if (tp.HasTable())
    {
        cout << "yes\n";
    }
    else
    {
        cout << "no\n";
    }
}

void Show(const TableTennisPlayer * tp)
{
    using std::cout;
    cout << "Name: ";
    tp->Name();
    cout << "\nTable: ";
    if (tp->HasTable())
    {
        cout << "yes\n";
    }
    else
    {
        cout << "no\n";
    }
}

RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string & ln, bool ht) : rating(r), TableTennisPlayer(fn, ln, ht)
{
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp) : rating(r), TableTennisPlayer(tp)
{
}
