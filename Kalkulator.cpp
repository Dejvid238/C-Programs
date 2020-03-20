#include <iostream>
#include <stdlib.h>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum opcja {Dodaj=1,Odejmij,Mnoz,Dziel,Poteguj}; //deklaracja funkcji enum - ogranicza pule wyboru
int liczba;
int wybor;

//inicjacja funkcji uzytych w programie, dla estetyki zapisu zostaly one zapisane po funkcji glownej

void Menu();
void MenuBox();
void Dodawanie(float &L1,float &L2);
void Odejmowanie(float &L1,float &L2);
void Mnozenie(float &L1,float &L2);
void Dzielenie(float &L1,float &L2);
void Potegowanie(float &L1,float &L2);
void poprawnosc(float &L1); //funkcja sprawdzajaca poprawnosc wpisanego znaku
void poprawnosc(int &L1);
bool wszystko_okej(string); //funkcja wysylajaca powiadomienie o bledach
bool wszystko_okej();


int main(){

float zmienna1,zmienna2;
cout<<"Podaj pierwsza liczbe: ";
poprawnosc(zmienna1); //funkcja sprawdzajaca popranosc wpisanego znaku
cout<<endl;
cout<<"Podaj druga liczbe: ";
poprawnosc(zmienna2);
cout<<endl;

MenuBox();

Menu();
    if (liczba==1) Dodawanie(zmienna1,zmienna2);
    else if (liczba==2) Odejmowanie(zmienna1,zmienna2);
    else if (liczba==3) Mnozenie(zmienna1,zmienna2);
    else if (liczba==4) Dzielenie(zmienna1,zmienna2);
    else if (liczba==5) Potegowanie(zmienna1,zmienna2);

    getchar();
return 0;
}

void MenuBox()
{
    cout<<"Wybierz co chcesz zrobic: "<<endl;
    cout<<"1 - Dodawanie "<<endl;
    cout<<"2 - Odejmowanie "<<endl;
    cout<<"3 - Mnozenie "<<endl;
    cout<<"4 - Dzielenie "<<endl;
    cout<<"5 - Potegowanie "<<endl;
}

void Menu ()
{
        for(int i=1;i>0;)
        {
            poprawnosc(liczba);
            switch (liczba)
            {
                case Dodaj:
                liczba=Dodaj;
                i=0;
                break;
                case Odejmij:
                liczba=Odejmij;
                i=0;
                break;
                case Mnoz:
                liczba=Mnoz;
                i=0;
                break;
                case Dziel:
                liczba=Dziel;
                i=0;
                break;
                case Poteguj:
                liczba=Poteguj;
                i=0;
                break;
                default:
                system("clear");
                cout<<"Wybrano zly numer, sprobuj ponownie..."<<endl;
                MenuBox();
                i++;
                break;
                }
            }
}


void Dodawanie(float &L1,float &L2)
{
    float wynik=L1+L2;
    cout<<"Wynik dodawania to: "<<wynik<<endl;
}
void Odejmowanie(float &L1,float &L2){
    float wynik=L1-L2;
    cout<<"Wynik odejmowania to: "<<wynik<<endl;
}
void Mnozenie(float &L1,float &L2){
    float wynik=L1*L2;
    cout<<"Wynik mnozenia to: "<<wynik<<endl;
}
void Dzielenie(float &L1,float &L2){
    if (L2==0) {
        cout<<"Nie mozna dzielic przez 0!"<<endl;}
    else{
        float wynik=L1/L2;
        cout<<"Wynik dzielenia to: "<<wynik<<endl;}
}
void Potegowanie(float &L1,float &L2){
    float baza=L1;
    if (L2==0){
        baza=1;}
    else if (L2==1){
        baza=L1;}
    else {
        for (int i=2;i<=L2;i++){
            baza*=L1;}
         }
    cout<<"Wynik potegowania to: "<<baza<<endl;
}
void poprawnosc(float &a)
{
    while (!(cin>>a)) //wykonuj dopoki nie zostanie wprowadzony poprawny znak (zaprzeczona wartosc prawidlowa konczy dzialanie petli)
    {
        //cin.rdstate() - stan !0
        cin.clear(); // czyszczenie stanu wpisanego znaku - w innym wypadku nie mozna byloby wczytac ponownie
        //cin.rdstate(); - stan == 0 - mozna wprowadzac znak ponownie
        cin.ignore(1024, '\n'); //ignoruje wszystko oprocz pierwszego (pojedynczego) znaku
        system("clear");
        cout<<"To nie jest prawidlowy znak! Wprowadz wartosc ponownie: ";
    }
}
void poprawnosc(int &a)
{
    while (!(cin>>a)) //wykonuj dopoki nie zostanie wprowadzony poprawny znak (zaprzeczona wartosc prawidlowa konczy dzialanie petli)
    {
        //cin.rdstate() - stan !0
        cin.clear(); // czyszczenie stanu wpisanego znaku - w innym wypadku nie mozna byloby wczytac ponownie
        //cin.rdstate(); - stan == 0 - mozna wprowadzac znak ponownie
        cin.ignore(1024, '\n'); //ignoruje wszystko oprocz pierwszego (pojedynczego) znaku
        system("clear");
        cout<<"To nie jest prawidlowy znak! Wprowadz wartosc ponownie: "<<endl;
        MenuBox();
    }
}
bool wszystko_okej(string blad)
{
    if(cin.rdstate())
    {
        cin.clear();
        cin.ignore(1024,'\n');

        system("clear");
        cout<<blad;
        return false;
    }
    return true;
}
bool wszystko_okej()
{
    if(cin.rdstate())
    {
        cin.clear();
        cin.ignore(1024,'\n');

        system("clear");

        return false;
    }
    return true;
}

