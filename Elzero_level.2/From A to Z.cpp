//https://www.codewars.com/kata/6512b3775bf8500baea77663/solutions/cpp
#include <string>

std::string gimme_the_letters(const std::string& sp)
{
  std::string result ="";
  char start = sp[0];
  char end = sp[2];
  result += start;
  
  while(end!=result.back()){
     result += (char)(result.back() + 1);  
  }
  
  return result;
}
