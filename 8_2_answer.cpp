#include <iostream>
#define MAX_NUM 10
using namespace std;

int binSearch(int x, int arr[], int size) {
    int low  = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (x == arr[mid]) {
            return mid;
        }
        else if (x < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 13, 26, 33, 49, 60, 71, 82, 90, 99};
    int x;

    cout << "Enter a number: ";
    cin >> x;

    int ind = binSearch(x, arr, MAX_NUM);

    if (ind != -1) {
        cout << "The position of the number in the list is " << ind + 1 << endl;
    }
    else {
        cout << "The number is not in the list" << endl;
    }

    return 0;
}