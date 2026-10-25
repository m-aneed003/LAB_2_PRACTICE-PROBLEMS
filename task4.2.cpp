#include <iostream>
using namespace std;
void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int bubbleSortDesc(int arr[], int size) {
    int swaps = 0;
    for (int pass = 0; pass < size - 1; pass++) {
        bool swapped = false;
        for (int j = 0; j < size - 1 - pass; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
                swaps++;
            }
        }
        if (!swapped)
            break;
    }
    return swaps;
}
int main() {
    int arr[5] = {3, 6, 2, 9, 4};
    int swaps = bubbleSortDesc(arr, 5);
    cout << "Sorted (high to low): "; display(arr, 5);
    cout << "Total swaps: " << swaps << endl;
    return 0;
}