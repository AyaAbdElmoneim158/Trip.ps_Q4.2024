// https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3/solutions/cpp

#include <string>

std::string abbrevName(std::string name) {
  std::string abbName = "";
  abbName += toupper(name[0]);
  abbName += ".";
  // without for.........ret.push_back(toupper(name[name.find(' ') + 1] ));
  for (int i = 0; i < name.length(); i++) {
    if (name[i] == ' ') {
      abbName += toupper(name[i + 1]);
      break;
    }
  }
  return abbName;
}
