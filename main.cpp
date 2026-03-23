#include <iostream>
#include <string>
using namespace std;

#include "student.h"
int main(int argc, char* argv[]) {
  if (argc < 3 || (argc - 1) % 2 != 0) {
    cout << "Usage: ./student <name1> <age1> [<name2> <age2> ...]" << endl;
    return 1;
  }

  int youngest_age = 0;
  bool first_person = true;

  for (int i = 1; i < argc; i += 2) {
    int age = stoi(argv[i + 1]);

    if (first_person || age < youngest_age) {
      youngest_age = age;
      first_person = false;
    }
  }

  cout << "Youngest student" << endl;
  for (int i = 1; i < argc; i += 2) {
    int age = stoi(argv[i + 1]);
    if (age == youngest_age) {
      cout << "Name: " << argv[i] << endl;
      cout << "Age: " << age << endl;
    }
  }

  return 0;
}
  
  


