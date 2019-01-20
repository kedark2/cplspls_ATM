#include "balance.h"
#include"iostream"
using namespace std ;



Balance::Balance()
{
   present_balance = BALANCENOW ;
}


double Balance :: getBalance()
{
    return this-> present_balance ;
}

void Balance :: setwithdrawBalance(int n )
{
    this-> withdraw_balance = n ;

        if ( this->withdraw_balance > this-> present_balance)
            {
                cout << endl  << endl ;
                cout << "Transaction not succeed!! Balance is low." << endl ;
                cout << endl ;
                cout << endl ;
            }
        else
            {
                this->present_balance -= withdraw_balance ;
                cout << endl << endl ;
                cout << "Transaction succeed !! Withdraw Amount :" << this-> withdraw_balance << " Euro" << endl ;
                cout << endl ;
                cout << endl ;
            }
}


