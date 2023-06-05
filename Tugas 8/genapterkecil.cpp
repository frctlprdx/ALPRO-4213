#include <iostream>
using namespace std;


bool isEven (int cekgenap){
    if (cekgenap % 2 != 0)
    {
        return false;
    }else{
        return true;
    }
}
void isGenapKecil (int arr[], int size){
    int genapKecil = 9999999999;
    int idx = -1;

    for (int i = 0; i < size; i++){
        if(isEven(arr[i]) && arr[i] < genapKecil){
            genapKecil = arr[i];
            idx = i;
        }
    }
    if(genapKecil != 1000){
    cout << "Genap Terkecil : "<< arr[idx] << endl;
    cout << "index : "<< idx << endl;
    }else {
        cout << "Tidak ada angka genap" << endl;
    }
}

int main(){
    int arr[]= {345423623,242,14,123123,423,421,21,3161235,42141};
    int size = sizeof(arr)/sizeof(arr[0]);

    isGenapKecil(arr,size);

}
