#include <iostream>
using namespace std;

void Rotate(int arr[], int n) {
  int temp = arr[0];

  for (int i = 1; i < n; i++) {
    arr[i - 1] = arr[i];
  }

  arr[n - 1] = temp;
}

int main() {
  int nishant[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int size = sizeof(nishant) / sizeof(nishant[0]);

  Rotate(nishant, size);

  for (int i = 0; i < size; i++) {
    cout << nishant[i] << " ";
  }

  return 0;
}