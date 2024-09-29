// https://www.codewars.com/kata/577a6e90d48e51c55e000217/solutions/cpp

unsigned int hotpo(unsigned int number) {
  unsigned int count = 0;
  while (number != 1) {
    number = (number % 2 == 0) ? number / 2 : 3 * number + 1;
    count++;
  }
  return count;
}
