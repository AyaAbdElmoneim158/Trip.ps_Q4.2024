// https://www.codewars.com/kata/563e320cee5dddcf77000158/solutions/cpp

#include <vector>

int get_average(std::vector <int> marks)
{
  int sum = 0 ;
  for(int mark:marks){
    sum+=mark;
  }
  return sum/marks.size();
}
