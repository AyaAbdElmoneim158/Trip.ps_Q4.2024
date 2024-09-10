// https://www.codewars.com/kata/57cc975ed542d3148f00015b/solutions/cpp

#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
  return (std::find(seq.begin(), seq.end(), elem) != seq.end());
}

