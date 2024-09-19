// https://www.codewars.com/kata/57eae65a4321032ce000002d/solutions/cpp

#include <string>

std::string fakeBin(std::string str) {
  std::string finalStr = "";
  for (int i = 0; i < str.length(); i++) {
    if (str[i] < '5')
      finalStr += '0';
    else
      finalStr += '1';
  }
  return finalStr;
}
