#include <iostream>
using namespace std;
void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
int main() {
    int marks[6] = {78, 45, 92, 60, 85, 33};
    cout << "Before: "; display(marks, 6);
    selectionSort(marks, 6);
    cout << "After:  "; display(marks, 6);
    return 0;
}