class Uzytkownik
{
    int ID;             //te zmienne sa ustawione jako prywatne, nie mamy do nich dostepu
    static int counter; //do zmiennych tych powinnismy odwolywac sie poprzez funkcje zdefiniowane jako publiczne

    public:
        Uzytkownik();
        ~Uzytkownik();
        int getID();
        static int getCounter(); //statyczna metoda deinfiowania funkcji dzieki ktorej mamy mozliwosc operacji na zmiennej prywatnej
};
