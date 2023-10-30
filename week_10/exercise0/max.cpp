#include <iostream>

using namespace std;

int max(int nums[]) {
}

int main() {
    int a[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    int answer = max(a);
    cout << "Item " << 1 + answer << " is the largest" << endl;
    return 0;
}
