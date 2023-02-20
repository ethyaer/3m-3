#include <iostream>
using namespace std;

class Fib
{
    private:
        static const int N = 30;
        static int t[N];
    public:
        Fib();
        int wypisz(int n);
};

Fib::Fib()
{
    if(t[1]) return;
    t[0] = 0;
    t[1] = 1;
    for(int i=2; i<=N; i++)
        t[i] = t[i-1] + t[i-2];
}
int Fib::wypisz(int n)
{
    return t[n];
}

int Fib::t[N] = {};
int main()
{
    Fib f1;
    cout << f1.wypisz(10) << endl;

    //Fib f2;
    //cout << f2.wypisz(11) << endl;

    //Fib f[17265];
    //cout << f

    return 0;
}
