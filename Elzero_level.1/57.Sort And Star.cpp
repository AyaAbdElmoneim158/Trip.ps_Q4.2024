// https://www.codewars.com/kata/57cfdf34902f6ba3d300001e/solutions/cpp

#include <vector>

#include <string>

std::string twoSort(std::vector < std::string > vec) {
  std::string result = "";
  sort(vec.begin(), vec.end());
  for (int i = 0; i < vec[0].length(); i++) {
    result += vec[0][i];
    if (i != vec[0].length() - 1)
      result += "***";
  }
  return result;
}
