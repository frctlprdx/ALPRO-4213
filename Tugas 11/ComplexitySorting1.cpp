// Selection sort in C++
#include <iostream>
#include <chrono>
using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[step]);
  }
}

int main() {
  int data[] = {20, 12, 10, 15, 22};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  auto start = std::chrono::high_resolution_clock::now();
  cout << "Sorted array in Acsending Order:\n";
  printArray(data, size);
  auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << "Execution time: " << duration << " milliseconds" << std::endl;
    return 0;
}