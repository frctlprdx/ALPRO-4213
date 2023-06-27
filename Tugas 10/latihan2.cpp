#include <iostream>
using namespace std;

struct sepeda {
    string merk, type;
    int tahun,harga;
};

int main()
{
    sepeda spd;
    spd.merk = "polygon";
    spd.type = "Sepeda gunung";
    spd.tahun = 2013;
    spd.harga = 2000000;
    
    cout << spd.merk << endl;
    cout << spd.type << endl;
    cout << spd.tahun << endl;
    cout << spd.harga << endl;
    
	return 0;
}
