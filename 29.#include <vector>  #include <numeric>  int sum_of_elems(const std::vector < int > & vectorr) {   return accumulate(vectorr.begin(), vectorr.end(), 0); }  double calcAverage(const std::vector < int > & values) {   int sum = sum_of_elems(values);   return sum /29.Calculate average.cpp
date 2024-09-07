// https://www.codewars.com/kata/57a2013acf1fa5bfc4000921/solutions/solutions

#include <vector>

#include <numeric>

int sum_of_elems(const std::vector < int > & vectorr) {
  return accumulate(vectorr.begin(), vectorr.end(), 0);
}

double calcAverage(const std::vector < int > & values) {
  int sum = sum_of_elems(values);
  return sum / (double) values.size();
}
