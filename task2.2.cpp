#include <iostream>
using namespace std;
bool exists(int arr[], int low, int high, int key) {
    if (low > high)
        return false;
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
        return true;
    else if (key < arr[mid])
        return exists(arr, low, mid - 1, key);
    else
        return exists(arr, mid + 1, high, key);
}
int main() {
    int marks[7] = {35, 48, 56, 67, 72, 85, 91};
    int keys[2] = {72, 60};
    for (int k = 0; k < 2; k++) {
        if (exists(marks, 0, 6, keys[k]))
            cout << keys[k] << " is present\n";
        else
            cout << keys[k] << " is not present\n";
    }
    return 0;
}