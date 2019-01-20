#include "pin.h"
#include"fstream"
#include"iostream"

using namespace std ;

Pin::Pin()
{


}

int Pin :: getPin()
{
    ifstream myfile ;
    myfile.open("PINFILE.txt");
    if ( myfile.is_open() )
    {
        while (!myfile.eof())
        {
            myfile >> this->pin_id ;

        }
    }
    return this-> pin_id ;
    myfile.close();
}

void Pin :: setPin(int n)
{
    ofstream myfile ;
    myfile.open("PINFILE.txt");
    if ( myfile.is_open())
    {
        myfile << n ;
    }
    myfile.close();

}
