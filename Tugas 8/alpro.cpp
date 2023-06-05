// Insertion sort in C++

#include <iostream>
using namespace std;


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key > array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}


int main() {
  int data[] = {9, 5, 1, 4, 3};
  int x;
  int size = sizeof(data) / sizeof(data[0]);
  cout << "ketik 1 untuk insertion 2 untuk bubble sort";
  cin >> x;

  if (x=1){
    insertionSort(data, size);}
  else {
    bubbleSort(data, size);
  }
  cout << "descending order:\n";
  printArray(data, size);
}
