// https://www.codewars.com/kata/53dc54212259ed3d4f00071c/solutions/cpp
#include <vector>
#include <numeric>

int sum(std::vector < int > nums) {
  if (nums.empty()) return 0;
  else if (nums.size() == 1) return nums[0];
  return std::accumulate(nums.begin(), nums.end(), 0);

}
