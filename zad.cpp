#include <iostream>
using namespace std;

class Osoba
{
    private:
        int id;
        string imie;
    public:
        static int liczbaInst;
        Osoba();
        Osoba(int id, string imie);
        Osoba(const Osoba &o);
        void wypisz(string s="");

};

int Osoba::liczbaInst = 0;

Osoba::Osoba()
{
    id = 0;
    imie= "";
    liczbaInst++;
}

Osoba::Osoba(int id, string imie)
{
    this->id = id;
    this->imie = imie;
    liczbaInst++;
}

Osoba::Osoba(const Osoba &o)
{
    id = o.id;
    imie = o.imie;
    liczbaInst++;
}

void Osoba::wypisz(string s)
{
    if(imie.size()==0)
        cout<<"Brak danych"<<endl;
    else
        cout<<"Czesc "<<s<<", mam na imie "<<imie<<endl;
}

int main()
{
    Osoba o1;
    o1.wypisz();

    Osoba o2(1, "Ala");
    o2.wypisz("Janek");

    Osoba o3(o2);
    o3.wypisz("Kazik");




    return 0;
}
