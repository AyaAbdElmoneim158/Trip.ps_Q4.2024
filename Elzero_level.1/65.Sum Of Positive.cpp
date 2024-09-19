// https://www.codewars.com/kata/5715eaedb436cf5606000381/solutions/cpp

#include <vector>

int positive_sum(const std::vector < int > arr) {
  int result = 0;
  for (auto & ele: arr) {
    if (ele > 0)
      result += ele;
  }
  return result;
}
