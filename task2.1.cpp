#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1;                        // base case: not found
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
        return mid;                       // base case: found
    else if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}
int main() {
    int codes[6] = {1001, 1004, 1010, 1025, 1040, 1077};
    int keys[2] = {1025, 1030};
    for (int k = 0; k < 2; k++) {
        int pos = binarySearch(codes, 0, 5, keys[k]);
        if (pos == -1)
            cout << "Code " << keys[k] << " not in stock\n";
        else
            cout << "Code " << keys[k] << " is at index " << pos << endl;
    }
    return 0;
}