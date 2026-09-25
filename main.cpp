#include <iostream>
using namespace std;

// Lab 5 - Noe Zuniga
// CIS 5 Week 05 - Eligibility check

int main() {
  int age = 0;
  double gpa = 0.0;

  cout << "Age? ";
  cin >> age;

  cout << "GPA? ";
  cin >> gpa;

  // Thresholds: adult at 18, honors at 3.5
  bool adult = age >= 18;
  bool honors = gpa >= 3.5;

  if (adult && honors) {
    cout << "Eligible for the honors program." << endl;
  }
  else if (adult || honors) {
    cout << "Halfway there. One requirement met." << endl;
  }
  else {
    cout << "Not eligible yet." << endl;
  }

  // Edge values to run: 17 / 18 with a 3.8, and 3.4 / 3.5 with age 20
  return 0;
}
