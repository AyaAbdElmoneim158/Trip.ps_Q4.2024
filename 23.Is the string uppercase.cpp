// https://www.codewars.com/kata/56cd44e1aa4ac7879200010b/solutions/cpp

#include <string>

bool is_uppercase(const std::string & str) {
  bool flag = true;
  for (auto & ch: str) {
    if (islower(ch)) {
      flag = false;
      break;
    }

  }
  return flag;
}
