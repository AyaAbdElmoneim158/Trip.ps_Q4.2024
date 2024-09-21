// https://www.codewars.com/kata/5601409514fc93442500010b/solutions/cpp

#include <vector>
#include <numeric>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  int average = std::accumulate(classPoints.begin(), classPoints.end(), 0)/classPoints.size();
  return average<yourPoints;
}
