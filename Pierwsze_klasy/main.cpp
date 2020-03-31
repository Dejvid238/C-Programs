#include <iostream>
#include "uzytkownik.h"

using namespace std;

int main(int argc, char *argv[])
{

    Uzytkownik user[5];


    cout<<user[0].getID()<<endl;
    cout<<user[1].getID()<<endl;

    cout<<Uzytkownik::getCounter()<<endl;   //wypisuje ostatnia wartosc ktora zostaje przypisana dla zmiennej counter

    getchar();
    return EXIT_SUCCESS;
}
