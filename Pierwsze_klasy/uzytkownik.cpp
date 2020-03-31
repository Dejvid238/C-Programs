#include "uzytkownik.h"

Uzytkownik::Uzytkownik()
{
    counter++;      //wartosc counter zwiekszona o 1 staje sie ID uzytkownika
    ID = counter;   //przedstawione ogolne dzialanie naszej klasy
}
Uzytkownik::~Uzytkownik()
{

}
int Uzytkownik::getID()
{
    return ID; //zwraca numer ktory przypisalismy do danego uzytkownika
}

int Uzytkownik::getCounter()
{
    return counter;
}
int Uzytkownik::counter = 0;
