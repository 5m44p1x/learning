#include <iostream>
#include "1307_brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelog Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382299, 3000.00);
    Piggy.ViewAcct();
    cout << endl;
    cout << "Depositing $1000 into the Hogg account:\n";
    Hoggy.Deposit(1000.00);
    cout << "New balance: $" << Hoggy.Balance() << endl;
    cout << endl;
    cout << "Withdrawing $4200 from the Pigg account:\n";
    Piggy.Withdraw(4200.00);
    cout << "Piggy account balance: $" << Piggy.Balance() << endl;
    cout << endl;
    cout << "Withdrawing $4200 from the Hogg account:\n";
    Hoggy.Withdraw(4200.00);
    cout << endl;
    Hoggy.ViewAcct();

    return 0;
}