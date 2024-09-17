// https://www.codewars.com/kata/55edaba99da3a9c84000003b/solutions/cpp

std::vector < int > divisible_by(std::vector < int > numbers, int divisor) {
  std::vector < int > result {};
  for (auto & num: numbers) {
    if (num % divisor == 0){
      result.push_back(num);
    }
  }
  return result;
}
