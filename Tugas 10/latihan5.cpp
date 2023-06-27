#include <iostream>
using namespace std;

struct sepeda {
    string merk, type;
    int tahun, harga;
};

int main()
{
    sepeda spd;
    sepeda* ptr = &spd; 
    
    ptr->merk = "polygon";
    ptr->type = "Sepeda gunung";
    ptr->tahun = 2013;
    ptr->harga = 2000000;
    
    cout << ptr->merk << endl; 
    cout << ptr->type << endl;
    cout << ptr->tahun << endl;
    cout << ptr->harga << endl;
    
    return 0;
}

