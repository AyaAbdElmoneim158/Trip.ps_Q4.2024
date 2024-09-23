// https://www.codewars.com/kata/58649884a1659ed6cb000072/solutions/cpp

#include <string>

std::string update_light(std::string current) {
  return (current == "green") ? "yellow" : (current == "yellow") ? "red" : "green";
}
