#include <iostream>
using namespace std;

int main() {
  int m, n;
  
  cout << "Enter a number a: ";
  cin >> m;
  cout << "Enter a number b: ";
  cin >> n;

  int temp = 0;
  while (n != 0) {
    temp = m % n;
    m = n;
    n = temp;
  }

  cout << "GCD is " << m << endl;
  return 0;
}