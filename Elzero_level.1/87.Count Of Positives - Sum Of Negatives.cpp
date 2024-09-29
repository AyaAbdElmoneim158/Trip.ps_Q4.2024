// https://www.codewars.com/kata/576bb71bbbcf0951d5000044/solutions/cpp

#include <vector>

std::vector < int > countPositivesSumNegatives(std::vector < int > input) {
  if (input.empty()) return {};
  int count = 0, sum = 0;
  for (auto & ele: input) {
    (ele > 0) ? count++ : sum += ele;
  }
  return {count,sum};
}
