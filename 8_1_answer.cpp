#include <iostream>
#define MAX_NUM 10
using namespace std;

void swap (int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int arr[MAX_NUM];

    cout << "Enter ten integers : ";
    for (int i = 0; i < MAX_NUM; ++i) {
        cin >> arr[i];
    }

    //Selection sort to sort integers in ascending order
    for (int i = 0; i < MAX_NUM - 1; ++i) {
        int min_val = arr[i];
        int min_ind = i;
        for (int j = i; j < MAX_NUM; ++j) {
            if (arr[j] < min_val) {
                min_ind = j;
                min_val = arr[j];
            }
        }
        swap(arr[i], arr[min_ind]);
    }

    cout << "Sorted integers    : ";
    for (int i = 0; i < MAX_NUM; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    return 0;
}