// https://www.codewars.com/kata/56582133c932d8239900002e/solutions/cpp
#include <vector>

unsigned int most_frequent_item_count(const std::vector < int > & collection) {
  if (collection.empty()) return 0;

  std::vector < int > allItemsCount {};
  for (auto & ele: collection) {
    allItemsCount.push_back(count(collection.begin(), collection.end(), ele));
  }

  return * max_element(allItemsCount.begin(), allItemsCount.end());
}
