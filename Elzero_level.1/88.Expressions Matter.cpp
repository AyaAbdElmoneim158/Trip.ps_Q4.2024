// https://www.codewars.com/kata/5ae62fcf252e66d44d00008e/solutions/cpp

#include <iostream>
#include <algorithm>
using namespace std;

unsigned short int expressionsMatter(unsigned short int a, unsigned short int b, unsigned short int c) {
  unsigned int arr[6];
  arr[0] = a + b + c;
  arr[1] = a * b * c;
  arr[2] = a + (b * c);
  arr[3] = (a + b) * c;
  arr[4] = a * (b + c);
  arr[5] = (a * b) + c;
  return * max_element(arr, arr + 6);
}
