// https://www.codewars.com/kata/57a1fd2ce298a731b20006a4/solutions/cpp

#include <string>
#include <algorithm>
#include <cctype>

bool isPalindrom(const std::string & str) {
  if (str.length() < 2) return true;
  
  std::string orginalStr = str;
  std::string reversedStr = str;
  std::reverse(reversedStr.begin(), reversedStr.end());
  for (auto & c: reversedStr) c = tolower(c);
  for (auto & c: orginalStr) c = tolower(c);

  return reversedStr == orginalStr;
}
