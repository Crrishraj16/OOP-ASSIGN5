#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

void checkVowels(string str) {
  bool has_vowel = false;

  // checking if the string contains vowels
  for (char ch : str) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      has_vowel = true;
      break;
    }
  }

  // throwing an exception if the string does not contain vowels
  if (!has_vowel) {
    throw runtime_error("The string does not contain vowels");
  }
}

int main() {
  string str;

  // taking the string from the user
  cout << "Enter a string: ";
  cin >> str;

  try {
    // calling the checkVowels() method
    checkVowels(str);
    cout << "The string contains vowels." << endl;
  } catch (const exception& e) {
    cout << "Error: " << e.what() << endl;
  }

  return 0;
}
