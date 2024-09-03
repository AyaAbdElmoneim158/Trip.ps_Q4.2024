//https://www.codewars.com/kata/577a98a6ae28071780000989/solutions/cpp

#include <vector>

using namespace std;

int min(vector < int > list) {

  return * min_element(list.begin(), list.end());
}

int max(vector < int > list) {

  return * max_element(list.begin(), list.end());
}
