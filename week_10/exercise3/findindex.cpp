#include <iostream>
#include <vector>

using namespace std;

int index(int array[], int target) {
}
int main() {
    int a[4];
    cout << "Enter four numbers: ";
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    cout << "Should be inserted at: ";
    cout << index(a, target) << endl;
}
