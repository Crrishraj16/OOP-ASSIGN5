#include <iostream>
#include <exception>

using namespace std;

int main() {
  int arr[5];
  int i, n;

  // taking the size of the array from the user
  cout << "Enter the size of the array: ";
  cin >> n;

  // taking array values from the user
  cout << "Enter the array elements: ";
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }

  try {
    // accessing an element beyond the bounds of the array
    cout << arr[n] << endl;
  } catch (exception e) {
    cout << "Exception thrown: " << e.what() << endl;
  }

  return 0;
}
