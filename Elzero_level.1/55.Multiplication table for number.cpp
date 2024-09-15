// https://www.codewars.com/kata/5a2fd38b55519ed98f0000ce/solutions/cpp

#include <string>

std::string multi_table(int number) {
  std::string result = "";
  for (int i = 1; i < 11; i++) {
    result +=  std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(i * number) + "\n";
  }
  result.pop_back();
  return result;
}
