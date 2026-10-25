#include <iostream>
using namespace std;
void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void selectionSortDesc(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++)
            if (arr[j] > arr[maxIndex])
                maxIndex = j;
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}
int main() {
    int scores[5] = {12, 45, 7, 30, 22};
    selectionSortDesc(scores, 5);
    cout << "Leaderboard: "; display(scores, 5);
    cout << "Winner score: " << scores[0] << endl;
    return 0;
}