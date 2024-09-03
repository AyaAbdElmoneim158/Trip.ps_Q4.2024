//https://www.codewars.com/kata/57a0885cbb9944e24c00008e/solutions/cpp
#include <string>

std::string removeExclamationMarks(std::string str) {
  std::string removedExclamationMarks = "";
  for (int i = 0; i < str.length(); i++) {
    if (str[i] != '!') {
      removedExclamationMarks += str[i];
    }

  }
  return removedExclamationMarks;
}
