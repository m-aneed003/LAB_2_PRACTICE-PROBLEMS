#include <iostream>
using namespace std;
const int CAPACITY = 10;
void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int insertSorted(int arr[], int size, int value) {
    if (size == CAPACITY) {
        cout << "Array is full\n";
        return size;
    }
    int j = size - 1;
    while (j >= 0 && arr[j] > value) {   // shift bigger values right
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = value;                  // place value in the gap
    return size + 1;
}
int main() {
    int arr[CAPACITY] = {10, 20, 30, 50, 60};
    int size = 5;
    cout << "Start:      "; display(arr, size);
    size = insertSorted(arr, size, 40);
    cout << "Insert 40:  "; display(arr, size);
    size = insertSorted(arr, size, 5);
    cout << "Insert 5:   "; display(arr, size);
    size = insertSorted(arr, size, 70);
    cout << "Insert 70:  "; display(arr, size);
    return 0;
}