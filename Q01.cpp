#include <iostream>
#include <exception>

using namespace std;

void find_and_print_high_and_second_high(int n) {
  int arr[n];
  int i, max = arr[0], sec_max = arr[0];

  // taking input from the user
  for (i = 1; i < n; i++) {
    cin >> arr[i];
  }

  // finding the highest and second highest number
  for (i = 0; i < n; i++) {
    if (arr[i] > max) {
      sec_max = max;
      max = arr[i];
    } else if (arr[i] > sec_max) {
      sec_max = arr[i];
    }
  }

  // printing the highest and second highest number
  cout << "The highest number is: " << max << endl;
  cout << "The second highest number is: " << sec_max << endl;
}

int main() {
  int n;

  // taking the number of elements from the user
  cout << "Enter the number of elements: ";
  cin >> n;

  try {
    find_and_print_high_and_second_high(n);
  } catch (exception e) {
    cout << "Exception thrown: " << e.what() << endl;
  }

  return 0;
}
