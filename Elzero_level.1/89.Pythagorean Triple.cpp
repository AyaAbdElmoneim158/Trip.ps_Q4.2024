// https://www.codewars.com/kata/5951d30ce99cf2467e000013/solutions/cpp

#include <iostream>
#include <algorithm>
using namespace std;

bool PythagoreanTriple(const int a, const int b, const int c)
{
  int arr[3] = {a, b, c};
  sort(arr, arr + 3);
  return (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]);
}
