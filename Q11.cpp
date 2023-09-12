#include <iostream>
#include <stdexcept>
#include <unordered_set>

using namespace std;

int main() {
  unordered_set<int> nums;
  int n;

  // taking the number of integers from the user
  cout << "Enter the number of integers: ";
  cin >> n;

  // taking the integers from the user and checking for duplicates
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    
    if (nums.find(num) != nums.end()) {
      throw runtime_error("Duplicate number found");
    }

    nums.insert(num);
  }

  cout << "No duplicates found." << endl;

  return 0;
}
