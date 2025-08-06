#include <iostream>
using namespace std;

int main() {
  int numbers[5] = {10, 25, 5, 40, 15};
  int min = numbers[0];
  int max = numbers[0];

  for (int i = 1; i < 5; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }
    if (numbers[i] > max) {
      max = numbers[i];
    }
  }

  cout << "Minimum = " << min << endl;
  cout << "Maximum = " << max << endl;

  return 0;
}
