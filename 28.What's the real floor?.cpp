// https://www.codewars.com/kata/574b3b1599d8f897470018f6/solutions/cpp

int getRealFloor(int f) {
  return (f<=0)?f:(f>13)?f-2:f-1;
}
