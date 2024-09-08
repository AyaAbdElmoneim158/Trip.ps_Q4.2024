// https://www.codewars.com/kata/5388f0e00b24c5635e000fc6/solutions/cpp

#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
  return std::make_pair( values.second, values.first );
}
