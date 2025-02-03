#include <iostream>
#include <string>
#include <new>

using namespace std;

const int BUF = 512;

class JustTesting
{
private:
    string words;
    int number;
public:
    JustTesting(const string & s = "Just Testing", int n = 0)
    {
        words = s;
        number = n;
        cout << words << " constructed\n";
    }
    ~JustTesting()
    {
        cout << words << " destroyed\n";
    }
    void Show()
    {
        cout << words << ", " << number << endl;
    }
};

int main()
{
    char * buffer = new char[BUF];
    JustTesting * pc1 = nullptr;
    JustTesting * pc2 = nullptr;

    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("Heap1", 20);

    cout << "Memory block addresses:\n" << "buffer: "
         << (void *)buffer << " heap: " << pc2 << endl;
    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting * pc3 = nullptr;
    JustTesting * pc4 = nullptr;
    JustTesting * pc5 = nullptr;
    pc3 = new (buffer) JustTesting("Bad Idea", 6);
    pc5 = new (buffer + sizeof(JustTesting)) JustTesting("Better Idea", 8);
    pc4 = new JustTesting("Heap2", 10);
    cout << "Memory contents:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc5 << ": ";
    pc5->Show();
    cout << pc4 << ": ";
    pc4->Show();

    delete pc2;
    delete pc4;

    pc5->~JustTesting();
    pc3->~JustTesting();
    delete [] buffer;
    cout << "Done\n";

    return 0;
}