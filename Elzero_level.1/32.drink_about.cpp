// https://www.codewars.com/kata/56170e844da7c6f647000063/solutions/cpp

#include <string>

std::string people_with_age_drink(int age) {
  return age < 14 ? "drink toddy" : age < 18 ? "drink coke" : age < 21 ? "drink beer" : "drink whisky";
}
