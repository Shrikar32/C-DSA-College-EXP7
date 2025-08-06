#include <iostream>
using namespace std;

int main() {
  int numbers[5] = {10, 20, 30, 40, 50};
  int sum = 0;
  int size = 5;

  for (int i = 0; i < size; i++) {
    sum += numbers[i];
  }

  float average = (float)sum / size;

  cout << "Sum = " << sum << endl;
  cout << "Average = " << average << endl;

  return 0;
}
