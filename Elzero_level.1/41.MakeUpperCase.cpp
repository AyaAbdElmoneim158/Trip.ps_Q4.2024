// https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7/solutions/cpp

#include <string>

std::string makeUpperCase(const std::string & str) {
  std::string result = "";
  for (int i = 0; i < str.size(); i++) {
    result.push_back(toupper(str[i]));
  }
  return result;
}
