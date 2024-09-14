// https://www.codewars.com/kata/5b077ebdaf15be5c7f000077/solutions/cpp

#include <string>

std::string countSheep(int number) {
  std::string result = "";
  for (int i = 1; i <= number; i++) {
    result += (std::to_string(i) + " sheep...");
  }
  return result;
}
