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
    int value;
    cout << "What value do you want to add? ";
    cin >> value;
    int index;
    cout << "Before what item do you want to add it? ";
    cin >> index;

    // YOUR CODE BELOW ---------------------

    a[size] = value;
    for (int i = index; i < size; i++) {
        int temp = a[i];
        a[i] = a[size];
        a[size] = temp;
    }
    size++;

    // YOUR CODE ABOVE ---------------------

    cout << "New array: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
