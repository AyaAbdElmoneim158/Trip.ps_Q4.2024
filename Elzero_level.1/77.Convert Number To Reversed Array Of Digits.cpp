// https://www.codewars.com/kata/5583090cbe83f4fd8c000051/solutions/cpp
std::vector < int > digitize(unsigned long num) {
  std::vector < int > result {};
  for (auto x: std::to_string(num))
    result.push_back(x - '0');
  std::reverse(result.begin(), result.end());
  return result;
}
