// https://www.codewars.com/kata/56f69d9f9400f508fb000ba7/solutions/cpp

#include <vector>

std::vector<int> MonkeyCount(int number) {
  std::vector<int> vec {};
  for (int i = 1; i <= number; i++) {
    vec.push_back(i);
  }
  return vec;
}
