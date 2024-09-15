// https://www.codewars.com/kata/5513795bd3fafb56c200049e/solutions/cpp

#include <vector>

std::vector < int > countBy(int skip, int range) {
  std::vector < int > result {};

  for (int i = 1; i <= range; i++) {
    result.push_back(i * skip);

  }

  return result;
}
