#include <iostream>
#include<balance.h>
#include<pin.h>

using namespace std;
/*****************            
 *  APPLICATION :   Available Service Function in ATM 
 *  PURPOSE     :   Atm simulation, withdraw, deposit, print transition 
 *  AUTHOR      :   Kedar Kanel
 ***********************/
static char availableService()
{
    char charO = ' ' ;
    cout << "Choose Service from following options : " << endl ;
    cout << endl << endl ;
    cout << " .--------------.       .------------------." << endl ;
    cout << " | Withdraw (w) |       | Check Balance (c)|" << endl ;
    cout << " .--------------.       .------------------." << endl ;
    cout << endl ;
    cout <<endl ;
    cout << " .---------------.       .----------." << endl ;
    cout << " | Reciept PIN (r) |       | Exit (e) |" << endl ;
    cout << " .---------------.       .----------." << endl ;
    cout << endl ;
    cout << endl ;
    cin >> charO ;

    return charO ;

}

static bool correctPin()
{
      Pin a_pin_object ;
      int user_code ;
      afunction:
      {
        cout << "Enter Your 4 digit PIN code : " << endl ;
        cin >>  user_code ;
        if (user_code == a_pin_object.getPin())
              return true ;
      }
      goto afunction ;

      if (user_code == a_pin_object.getPin())
            return true ;
      else
        {
            goto afunction ;
        }


}


int main()
{
    correctPin() ;

    Balance a_balance_object ;
    Pin a_pin_objects ;
    int withdrawl_amount ;
    int new_pin1 ;
    int new_pin2 ;
    int old_pin ;

    char user_input ;
    while ( user_input  != 'e')
    {
        user_input = availableService();
        switch( user_input)
        {
        case 'w' :
                    cout << endl  << endl ;
                    cout << " Your withdrawal amount : " << endl ;
                    cout << endl << endl ;
                    cin >> withdrawl_amount ;
                    a_balance_object.setwithdrawBalance(withdrawl_amount);

                    break ;
        case 'c' :
                    cout << "Your balance is : " << a_balance_object.getBalance()  << endl ;
                    cout << endl << endl ;
                    break ;
        case 'r' :
                    cout << endl << endl ;
                    cout << "Enter your old password :" << endl ;
                    cout << endl << endl ;
                    cin >> old_pin ;
                    if ( old_pin == a_pin_objects.getPin() )
                    {

                        cout << endl << endl ;
                        cout << "You entered correct pin code. " << endl << endl;
                        cout << "Enter new password :" << endl ;
                        cin >> new_pin1 ;
                        cout << endl << endl ;
                        cout << "Enter new password again : " << endl ;
                        cin >> new_pin2 ;
                        if ( new_pin1 == new_pin2)
                        {
                            a_pin_objects.setPin(new_pin2);
                            cout << endl << endl ;
                            cout << "Your PIN code is successfully changed." << endl << endl << endl ;
                         }
                        else
                        {   cout << endl << endl ;
                            cout << "Choose Resit Pin option and try again." << endl ;
                            cout << endl << endl ;
                        }
                    }
                    else
                    {   cout << endl << endl ;
                        cout << "Choose Resit Pin option and try again." << endl ;
                        cout << endl << endl ;
                    }
                        break ;
        default :
                    break ;
        }


    }

    cout << "-----------------------------------------" << endl ;
    cout << endl << endl ;
    cout << "Thank you for using our service" << endl ;
    cout << endl << endl ;
    cout << "-----------------------------------------" << endl ;



    return 0;
}

