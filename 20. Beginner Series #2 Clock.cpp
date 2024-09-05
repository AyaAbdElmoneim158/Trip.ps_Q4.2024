//https://www.codewars.com/kata/55f9bca8ecaa9eac7100004a/solutions/cpp
int past(int h, int m, int s) {
  m = 60 * m;
  h = 3600 * h;
  return (s + m + h) * 1000;
}
