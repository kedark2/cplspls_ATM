#ifndef BALANCE_H
#define BALANCE_H
#define BALANCENOW 1000.00


class Balance
{
private:
    double present_balance ;
    int withdraw_balance ;

public:
    Balance(); // Constructor that sets initial balance to be defined BALANCENOW
    double getBalance() ; // This gets current balance in user's account
    void setwithdrawBalance(int n ) ; // This gets withdraw amount and at the same time sets current balance in users account

};

#endif // BALANCE_H
