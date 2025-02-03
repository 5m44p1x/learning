#include <iostream>
#include <cstdlib>
#include <ctime>
#include "1415_stacktp1.h"

const int Num = 10;

int main()
{
    std::srand(std::time(0));
    std::cout << "Please enter stack size: ";
    int stacksize;
    std::cin >> stacksize;
    Stack<const char *> st(stacksize);
    const char * in[Num] = {
        " 1: H G",
        " 2: K I",
        " 3: B R",
        " 4: I F",
        " 5: W K",
        " 6: P K",
        " 7: J A",
        " 8: X P",
        " 9: J M",
        "10: M M"
    };
    const char * out[Num];
    int processed = 0;
    int nextin = 0;
    while (processed < Num)
    {
        if (st.isempty())
        {
            st.push(in[nextin++]);
        }
        else if (st.isfull())
        {
            st.pop(out[processed++]);
        }
        else if (std::rand() % 2 && nextin < Num)
        {
            st.push(in[nextin++]);
        }
        else
        {
            st.pop(out[processed++]);
        }
    }
    for (int i = 0; i < Num; i++)
    {
        std::cout << out[i] << std::endl;
    }
    std::cout << "Bye\n";
    return 0;
}