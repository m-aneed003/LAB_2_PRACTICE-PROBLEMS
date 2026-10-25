#include <iostream>
using namespace std;
void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int ages[5] = {25, 18, 30, 12, 21};
    cout << "Before: "; display(ages, 5);
    insertionSort(ages, 5);
    cout << "After:  "; display(ages, 5);
    return 0;
}