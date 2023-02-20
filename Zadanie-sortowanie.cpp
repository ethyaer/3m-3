#include <iostream>
using namespace std;
//3 9 0 1 4 6 1 6 7 2
//const int N = 10;

class Sortowanie
{
private:
    static const int N = 10;
    int t[N];
    void Szukaj();
    void Sortuj();
public:
    void WczytajTab();
    void WypiszTab();
    void WypiszSzukanie();
};

void Sortowanie::WczytajTab()
{
    for(int i=0; i<N; i++)
        cin>>t[i];
    Sortuj();
    Szukaj();
}

void Sortowanie::Sortuj()
{
    for(int i=0; i<N-1; i++)
        for(int k=0; k<N-1-i; k++)
        {
            if(t[k+1] < t[k])
             swap(t[k], t[k+1]);
        }
}

void Sortowanie::WypiszTab()
{
    for(int i=0; i<N; i++)
		cout<<t[i]<<" ";
		cout<<endl;
}

void Sortowanie::Szukaj()
{
    for(int i=0; i<N-1; i++)
        for(int k=0; k<N-1-i; k++)
        {
            if(t[k+1] < t[k])
             swap(t[k], t[k+1]);
        }
}

void Sortowanie::WypiszSzukanie()
{
    for(int i=0; i<N; i++)
        if(i<N && i==N-1)
            cout<<"Maksymalna wartosc tablicy: "<<t[i]<<" ";
    cout<<endl;

}

int main()
{
    Sortowanie s;
    s.WczytajTab();
    s.WypiszTab();
    s.WypiszSzukanie();

    return 0;
}
