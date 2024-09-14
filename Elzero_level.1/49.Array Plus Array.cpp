// https://www.codewars.com/kata/5a2be17aee1aaefe2a000151/solutions/cpp

#include <vector>

int arrayPlusArray(std::vector < int > arr1, std::vector < int > arr2) {
  int sum = 0;
  for (auto & a: arr1)
    sum += a;

  for (auto & a: arr2)
    sum += a;

  return sum;
}
