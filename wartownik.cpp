#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <conio.h>
using std::cout;
using std::cin;
using std::endl;

class wartownik
{
private:
    static const int N=50;
    int tablica[N+1], x, szukanie();
public:
    wartownik();
    void wczytaj();
    void wypisz();

};

wartownik::wartownik()
{
    for(int i=0; i<N; i++)
        tablica[i] = rand()%100+1;
}

void wartownik::wczytaj()
{
    cout<<"Podaj liczbe: ";
    cin>>x;
    tablica[N] = x;
}

int wartownik::szukanie()
{
    int j=0;
    while(true)
    {
        if(tablica[j] == x)
            return j;
        j++;
    }
}

void wartownik::wypisz()
{
    int s = szukanie();

    for(int i=0; i<N; i++)
        cout<<tablica[i]<<endl;
    if(s < N) cout<<"Pozycja: "<<s+1<<endl;
    else cout<<"nie "<<endl;
}

int main()
{
    wartownik w;
    w.wczytaj();
    w.wypisz();

    _getch();
    return 0;
}


