#include <iostream>
#include <ctime>
#include <bits/stdc++.h>
#include <conio.h>
#include <set>
#include <vector>
#include <queue>
using std::cout;
using std::cin;
using std::endl;
using std::set;


class Lotto
{
    private:
        static const int N = 6;
        set <int> zlos;
        set <int> zu;
        //int tab[N];
        void losuj();
        void wczytaj();
        void wypisz();
        void wypisz_wygrana();
        void ileWygranych();
        int ile, kwota;
    public:
        Lotto();
        void graj();
        int wygrana();

};

Lotto::Lotto() {
    srand(time(0));
    ile = 0;
    kwota = 0;
}

void Lotto::graj() {
    losuj();
   // wypisz();
    wczytaj();
    wypisz();
    ileWygranych();
    wypisz_wygrana();
    zlos.clear();
    zu.clear();
    ile = 0;
}

void Lotto::losuj() {
    while(zlos.size()<N)
        zlos.insert(rand()%49+1);
}

void Lotto::wczytaj() {
    int x;
    while(zu.size()<N)
    {
        cout<<"Podaj liczbe nr "<<zu.size()+1<<": ";
        cin>>x;
        zu.insert(x);
    }
}

void Lotto::ileWygranych() {
    for(auto e : zu)
        ile += zlos.count(e);
}

void Lotto::wypisz() {
    cout << "Wylosowane: ";
    for(auto e : zlos)
        cout << e << ' ';
    cout << endl;
}

int Lotto::wygrana() {
    return kwota;
}

void Lotto::wypisz_wygrana() {
    kwota = 0;
    if(ile == 3) kwota = 20;
    else if(ile == 4) kwota = 500;
    else if(ile == 5) kwota = 9000;
    else if(ile == 6) kwota = 1000000;

    cout<<"Wygrana to: "<<kwota<<"zl"<<endl;
}

int main()
{
     char wybor;
     int saldo;
     cout << "Ile masz na hazard?: ";
     cin >> saldo;

     Lotto lotto;

     do{
        if(saldo<4)
        {
            cout << "Okradlismy cie na tyle ze nie masz na kolejna gre!!!";
            break;
        }
        else
            saldo-=4;

        lotto.graj();
        saldo+=lotto.wygrana();
        cout<<"Masz "<<saldo<<"zl\n"<<endl;
        cout << "Czy jeszcze raz? (t/n):";
        cin >> wybor;
     }while(wybor=='t');

    _getch();
    return 0;
}
