// https://www.codewars.com/kata/5966e33c4e686b508700002d/solutions/cpp

#include <iostream>
#include <string>
using namespace std;

string sum_str(const string & a, const string & b) {

  return to_string(std::atoi(a.c_str()) + std::atoi(b.c_str()));
}
