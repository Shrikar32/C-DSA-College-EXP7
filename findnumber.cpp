#include <iostream>
using namespace std;

int main() {
  int numbers[5] = {10, 20, 30, 40, 50};
  int target;
  cout << "Enter number: ";
  cin >> target;

  for (int i = 0; i < 5; i++) {
    if (numbers[i] == target) {
      cout << "Found!" << endl;
      return 0;
    }
  }

  cout << "Not found." << endl;
  return 0;
}
