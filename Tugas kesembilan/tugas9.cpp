// Online C++ compiler to run C++ program online
#include <iostream>
int jumlah(int a, int b){
    if (b == 0) return a;
    else return 1 + jumlah(a, b-1);
}

int kurang (int a, int b){
    if (b == 0) return a;
    else return kurang(a-1,b-1);
}

int kali(int a, int b){
    if(b==0) return 0;
    else return a + kali(a,b-1);
}

int bagi(int a,int b){
    if(a==0) return 0;
    else return 1+bagi(a-b,b);
}

int pang(int a,int b){
    if(b==0) return 1 ;
    else return a * pang(a,b-1);
}
int main() {
    int x,y,n;
    std::cout << "Pilih Daftar\n";
    std::cout << "1. Penjumlahan \n";
    std::cout << "2. Pengurangan \n";
    std::cout << "3. Perkalian\n";
    std::cout << "4. Pembagian\n";
    std::cout << "5. Pangkat\n";
    std::cin>> n;
    if (n == 1){
    std::cout << "Masukkan X ";
    std::cin>> x;
    std::cout << "Masukkan Y ";
    std::cin>> y;
    int hasil = jumlah(x,y);
    std::cout << hasil << std::endl;
    }
    else if (n==2){
    std::cout << "Masukkan X ";
    std::cin>> x;
    std::cout << "Masukkan Y ";
    std::cin>> y;
    int hasil = kurang(x,y);
    std::cout << hasil << std::endl;
    }
    else if (n==3){
    std::cout << "Masukkan X ";
    std::cin>> x;
    std::cout << "Masukkan Y ";
    std::cin>> y;  
    int hasil = kali(x,y);
    std::cout<<hasil<<std::endl;
    }
    else if (n==4){
    std::cout << "Masukkan X ";
    std::cin>> x;
    std::cout << "Masukkan Y ";
    std::cin>> y;  
    int hasil = bagi(x,y);
    std::cout<<hasil<<std::endl;
    }
    else if (n==5){
    std::cout << "Masukkan X ";
    std::cin>> x;
    std::cout << "Masukkan Y ";
    std::cin>> y;
    int hasil = pang(x,y);
    std::cout<<hasil<<std::endl;
    }
    
    return 0;
}
