// https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e/solutions/cpp

#include <bits/stdc++.h>

using namespace std;

int sumOfDifferences(const vector < int > & arr) {

  if (arr.empty()) return 0;

  int result = 0;
  vector < int > sortedArr = arr;
  sort(sortedArr.begin(), sortedArr.end(), greater < int > ());
  for (size_t i = 0; i < sortedArr.size() - 1; ++i) {
    result += sortedArr[i] - sortedArr[i + 1];
  }
  return result;
}
