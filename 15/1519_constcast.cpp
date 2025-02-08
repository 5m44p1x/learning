#include <iostream>

using std::cout;
using std::endl;

void change(const int * pt, int n)
{
    int * pc;
    pc = const_cast<int *>(pt);
    *pc += n;
}

int main()
{
    int pop1 = 38383; // only non-const variables can be modified
    const int pop2 = 2000; // does not work
    cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
    change(&pop1, -103);
    change(&pop2, -103);
    cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
    return 0;
}