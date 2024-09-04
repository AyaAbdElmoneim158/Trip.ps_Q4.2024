// https://www.codewars.com/kata/57eae20f5500ad98e50002c5/solutions/cpp

#include <string>

std::string no_space(const std::string & x) {
  std::string noSpaceText = "";
  for (int i = 0; i < x.length(); i++) {
    if (x[i] != ' ') {
      noSpaceText += x[i];
    }
  }
  return noSpaceText;
}
