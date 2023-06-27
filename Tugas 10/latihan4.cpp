#include <iostream>
using namespace std;

typedef struct {
    std::string nama, jurusan, nim;
    int tahun;
} Person;

int main() {
    int jumlahOrang;
    cout <<"masukkan jumlah orang ";
    cin >> jumlahOrang;
    Person orang[jumlahOrang];

    for (int i = 0; i < jumlahOrang; i++) {
        cout << "Data orang ke-" << i + 1 << endl;
        cout << "Masukkan nim: ";
        cin >> orang[i].nim;
        cout << "Masukkan nama: ";
        cin >> orang[i].nama;
        cout << "Masukkan jurusan: ";
        cin >> orang[i].jurusan;
        cout << "Masukkan tahun lulus: ";
        cin >> orang[i].tahun;
        cout << endl;
    }

    cout << "Data Orang:" << endl;
    for (int i = 0; i < jumlahOrang; i++) {
        cout << "Orang ke-" << i + 1 << endl;
        cout << "nim: " << orang[i].nim << endl;
        cout << "nama: " << orang[i].nama << endl;
        cout << "jurusan: " << orang[i].jurusan << endl;
        cout << "tahun: " << orang[i].tahun << endl;
        cout << endl;
    }

    return 0;
}


//saya lakukan terhadap array dinamis karena lebih mudah dibuat, lebih efisien dan mudah untuk menampilkan input output nya
