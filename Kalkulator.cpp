#include <iostream>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;

enum opcja {Dodaj=1,Odejmij,Mnoz,Dziel,Poteguj};

int liczba;

void Menu (){
  for (int i=1;i>0;){
     cout<<"Wybierz co chcesz zrobic: "<<endl;
     cout<<"1 - Dodawanie "<<endl;
     cout<<"2 - Odejmowanie "<<endl;
     cout<<"3 - Mnozenie "<<endl;
     cout<<"4 - Dzielenie "<<endl;
     cout<<"5 - Potegowanie "<<endl;

cin>>liczba;

switch (liczba){
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
     cout<<"Wybrano zly numer, sprobuj ponownie..."<<endl<<endl;
     i++;
   break;
   }
  }
 }


void Dodawanie(long long &L1,long long &L2){
     long long wynik=L1+L2;
     cout<<"Wynik dodawania to: "<<wynik<<endl;}

void Odejmowanie(long long &L1,long long &L2){
     long long wynik=L1-L2;
     cout<<"Wynik odejmowania to: "<<wynik<<endl;}

void Mnozenie(long long &L1,long long &L2){
     long long wynik=L1*L2;
     cout<<"Wynik mnozenia to: "<<wynik<<endl;}

void Dzielenie(long long &L1,long long &L2){
     if (L2==0) {
        cout<<"Nie mozna dzielic przez 0!"<<endl;}
     else{
        long long wynik=L1/L2;
        cout<<"Wynik dzielenia to: "<<wynik<<endl;}}

void Potegowanie(long long &L1,long long &L2){
     long long baza=L1;
     if (L2==0){
        baza=1;}
     else if (L2==1){
        baza=L1;}
     else {
        for (int i=2;i<=L2;i++){
           baza*=L1;}}
     cout<<"Wynik potegowania to: "<<baza<<endl;}

int main(){

long long zmienna1,zmienna2;

cout<<"Podaj pierwsza liczbe: ";
cin>>zmienna1;
cout<<endl;
cout<<"Podaj druga liczbe: ";
cin>>zmienna2;
cout<<endl;

Menu();
if (liczba==1) Dodawanie(zmienna1,zmienna2);
else if (liczba==2) Odejmowanie(zmienna1,zmienna2);
else if (liczba==3) Mnozenie(zmienna1,zmienna2);
else if (liczba==4) Dzielenie(zmienna1,zmienna2);
else if (liczba==5) Potegowanie(zmienna1,zmienna2);

getchar();
return 0;
}
