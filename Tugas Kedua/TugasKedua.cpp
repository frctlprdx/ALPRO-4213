#include <iostream>
using namespace std;

bool isEven(int x);
bool isOdd(int x);
bool isFactor(int x, int y);
void Swap(int x, int y);

int main() {
    bool jawaban = true;
    string pilihan;
    int x,y ;
    
  while (jawaban == true)
  {
    cout << "1. Even Number\n" ;
    cout << "2. Odd Number\n" ;
    cout << "3. Factor\n" ;
    cout << "4. Max Array\n" ;
    cout << "5. Min Array\n" ;
    cout << "6. Max\n" ;
    cout << "7. Min\n" ;
    cout << "8. Summary Even\n" ;
    cout << "9. Summary Odd\n" ;
    cout << "10. Swap Number\n" ;
    cout << "Masukkan angka pilihan : " ;
    cin >> pilihan ;

    if (pilihan == "1")
    {
        cout << "Insert Number : ";
        cin >> x;
        bool answer = isEven(x);
        cout << answer << "\n";
    }

    else if (pilihan == "2")
    {
        cout << "Insert Number : ";
        cin >> x;
        bool answer = isOdd(x);
        cout << answer << "\n";
    }

    else if (pilihan == "3")
    {
        cout << "Masukkan angka yang akan di cek : ";
        cin >> x;
        cout << "Masukkan angka pemfaktor : ";
        cin >> y;
        bool answer = isFactor(x,y);
        cout << answer << "\n";
    }

    else if (pilihan == "4")
    {
        
    }

    else if (pilihan == "5")
    {
        
    }

    else if (pilihan == "6")
    {
        
    }

    else if (pilihan == "7")
    {
        
    }

    else if (pilihan == "8")
    {
        
    }

    else if (pilihan == "9")
    {
        
    }

    else if (pilihan == "10")
    {
        cout << "Masukkan nomor pertama (X) : ";
        cin >> x;
        cout << "Masukkan nomor Kedua (Y): ";
        cin >> y;
        Swap(x,y);
    } 
    
    else {
        jawaban = false;
    }    
  }
  
  return 0;
}

bool isEven(int x){
    if (x % 2 == 0){
        return true;
    } 
    
    else {
        return false;
    }
    
}
bool isOdd(int x){
    if (x % 2 == 1){
        return true;
    } 
    
    else {
        return false;
    }
    
}

bool isFactor(int x, int y){
    if (x % y == 0){
        return true;
    } else {
        return false;
    }
    
}

void Swap (int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "X menjadi : "<< x << "\n";
    cout << "Y menjadi : "<< y << "\n";
}