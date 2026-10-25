#include <iostream>
using namespace std;
void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void bubbleSort(int arr[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        bool swapped = false;
        for (int j = 0; j < size - 1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        cout << "After pass " << pass + 1 << ": ";
        display(arr, size);
        if (!swapped)
            break;
    }
}
int main() {
    int arr[5] = {5, 1, 4, 2, 8};
    cout << "Start:        "; display(arr, 5);
    bubbleSort(arr, 5);
    return 0;
}