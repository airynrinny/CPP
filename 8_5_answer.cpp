#include <iostream>

using namespace std;

bool func(int arr[], int size) {
    if (size < 2) {
        return false;
    }
    *(arr + (size - 2)) = 0;
    return true;
}

int main() {
    
    cout << "Testing with arr1" << endl;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};    
    if (func(arr1, 8)) {
        cout << "Operation completed successfully" << endl;
        for (int i = 0; i < 8; ++i)
            cout << arr1[i] << " ";
        cout << endl;
    }
    else
        cout << "Operation failed" << endl;
    
    cout << endl;
    cout << "Testing with arr2" << endl;
    int arr2[] = {2};
    if (func(arr2, 1)) {
        cout << "Operation completed successfully" << endl;
        for (int i = 0; i < 1; ++i)
            cout << arr2[i] << " ";
        cout << endl;
    }
    else
        cout << "Operation failed" << endl;
    return 0;
}
