// https://www.codewars.com/kata/576b93db1129fcf2200001e6/solutions/cpp

#include<vector>
#include <numeric>
using namespace std;

int sum(vector < int > numbers) {
  if (numbers.size() < 2)
    return 0;

  auto minmax = minmax_element(numbers.begin(), numbers.end());

  return accumulate(numbers.begin(), numbers.end(), 0) - ( * minmax.first + * minmax.second);

}

