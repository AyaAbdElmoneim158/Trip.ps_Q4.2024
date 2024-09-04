// https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0/solutions/cpp
#include <string>

using namespace std;

string sliceString(string str)

{
  return str.substr(1, str.size() - 2);
}
