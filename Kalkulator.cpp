#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Dodawanie(long long &L1,long long &L2){
long long wynik=L1+L2;
cout<<"Wynik dodawania to: "<<wynik<<endl;
}
void Odejmowanie(long long &L1,long long &L2){
long long wynik=L1-L2;
cout<<"Wynik odejmowania to: "<<wynik<<endl;
}
void Mnozenie(long long &L1,long long &L2){
long long wynik=L1*L2;
cout<<"Wynik mnozenia to: "<<wynik<<endl;
}
void Dzielenie(long long &L1,long long &L2){
  if (L2==0) {
  cout<<"Nie mozna dzielic przez 0!"<<endl;}
  else{
  long long wynik=L1/L2;
  cout<<"Wynik dzielenia to: "<<wynik<<endl;}
  }
void Potegowanie(long long &L1,long long &L2){
    long long baza=L1;
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

int main(){
long long zmienna1,zmienna2;
cout<<"Podaj pierwsza liczbe: ";
cin>>zmienna1;
cout<<endl;
cout<<"Podaj druga liczbe: ";
cin>>zmienna2;
cout<<endl;
Dodawanie(zmienna1,zmienna2);
Odejmowanie(zmienna1,zmienna2);
Mnozenie(zmienna1,zmienna2);
Dzielenie(zmienna1,zmienna2);
Potegowanie(zmienna1,zmienna2);
getchar();
return 0;
}
