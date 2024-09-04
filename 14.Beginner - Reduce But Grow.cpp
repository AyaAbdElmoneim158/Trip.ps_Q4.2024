// https://www.codewars.com/kata/57f780909f7e8e3183000078/solutions/cpp
#include <vector>

int grow(std::vector < int > nums) {
  int multiplyingResult = 1;
  for (int i = 0; i < nums.size(); i++) {
    multiplyingResult *= nums[i];
  }
  return multiplyingResult;
}
