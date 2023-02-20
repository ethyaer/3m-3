#include <iostream>
using namespace std;
// 3 5 2 8 5 9 0 1 9 5
const int N=10;

class SortBabel
{
	private:
		int t[N];
		void sortujBabelkowo();
	public:
		void WczytajTab();
		void WypiszTab();
};

void SortBabel::WczytajTab()
{
	for(int i=0; i<N; i++)
		cin>>t[i];
	sortujBabelkowo();
}

void SortBabel::WypiszTab()
{
	for(int i=0; i<N; i++)
		cout<<t[i]<<' ';
}

void SortBabel::sortujBabelkowo()
{
	for(int j=0; j<N-1; j++)
		for(int i=0; i<N-1-j; i++)
			if(t[i] > t[i+1])
				swap(t[i], t[i+1]);

}


int main()
{
	SortBabel sb;
	sb.WczytajTab();
	sb.WypiszTab();

	return 0;
}
