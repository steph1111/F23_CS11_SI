#include <iostream>

using namespace std;

int main() {
    int a[10];

    int size;
    cout << "How many values do you want to fill? ";
    cin >> size;
    cout << "Enter in " << size << " values: ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    int index_delete;
    cout << "Which item do you want to delete? ";
    cin >> index_delete;

    // YOUR CODE BELOW ---------------------
    // YOUR CODE ABOVE ---------------------

    cout << "New array: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
