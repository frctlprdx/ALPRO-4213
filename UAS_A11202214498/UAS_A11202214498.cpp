#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama, nim;
    float score[5];
    
    void PrintMhs(){
        cout << "Nama : " << nama << endl;
        cout << "NIM : " << nim << endl;
        for(int i = 0; i < 5 ;i++){
        cout<<score[i] <<" "; }}
        
    float SwapData(float* s1, float* s2){
        float temp = *s1;
        *s1 = *s2;
        *s2 = temp;}
        
    float Summary(float *arr, int len){
        if(len<=0) return 0;
        return Summary(arr, len-1) + arr[len-1];}
        
    void bubbleSort(float *arr, int len){
        for (int i = 0; i < len - 1; i++){
            for (int j = 0; j < len - i - 1; j++){
                if (arr[j] > arr[j + 1])
                    SwapData(&arr[j], &arr[j + 1]);}
        }
    }
};

int main() {
   cout << "Program Data Mahasiswa" << endl;
   Mahasiswa m1 = {"Ivan Putra Pratama", "A11.2022.14498", {90,89,86,97,94}};
   cout << "Before Swap"<<endl;
   m1.PrintMhs();
   m1.SwapData(&m1.score[0], &m1.score[2]);
   cout <<" \n" << "\nAfter Swap 86 & 90 : \n";
   m1.PrintMhs();
   int n = sizeof(m1.score)/sizeof(m1.score[0]);
   m1.bubbleSort(m1.score, n);
   cout<<" \n" <<"\nArray after sort : " << endl;
   m1.PrintMhs();
   cout<<" \n" <<"\nAverage score : "<<m1.Summary(m1.score, n)/n<<endl;
    return 0;}