//https://www.codewars.com/kata/515e271a311df0350d00000f/solutions/cpp

int square_sum(const std::vector < int > & numbers) {
  int result = 0;

  for (auto & num: numbers) {
    result += (num * num);
  }

  return result;
}
