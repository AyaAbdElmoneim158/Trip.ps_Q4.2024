//https://www.codewars.com/kata/56efc695740d30f963000557/solutions/cpp

std::string to_alternating_case(const std::string & str) {
  std::string newStr = "";
  for (int i = 0; i < str.length(); i++) {
    newStr += isupper(str[i]) ? tolower(str[i]) : toupper(str[i]);
  }

  return newStr;
}
