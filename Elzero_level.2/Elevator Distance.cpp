// https://www.codewars.com/kata/59f061773e532d0c87000d16/solutions/cpp
#include <vector>

#include <cmath>

int elevator_distance(std::vector < int > array) {
  int steps = 0;
  if ((array.size() == 2) && (array[0] == array[1])) return 0;

  for (int i = 0; i < array.size() - 1; i++) {
    steps += abs(array[i] - array[i + 1]);

  }
  return steps;
}
