#include <iostream>
#include <exception>

using namespace std;

int main() {
  int a, b;

  // taking two numbers from the user
  cout << "Enter two numbers: ";
  cin >> a >> b;

  try {
    // dividing the two numbers
    cout << a / b << endl;
  } catch (exception e) {
    cout << "Exception thrown: " << e.what() << endl;
  }

  return 0;
}
