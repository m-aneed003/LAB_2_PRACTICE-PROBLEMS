#include <iostream>
using namespace std;
int binarySearchSteps(int arr[], int size, int key, int &steps) {
    int low = 0, high = size - 1;
    steps = 0;
    while (low <= high) {
        steps++;                          // one more comparison
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int keys[2] = {70, 5};
    for (int k = 0; k < 2; k++) {
        int steps;
        int pos = binarySearchSteps(arr, 10, keys[k], steps);
        cout << "Key " << keys[k] << ": index " << pos
             << ", binary search steps = " << steps
             << " (linear search worst case = 10)\n";
    }
    return 0;
}
