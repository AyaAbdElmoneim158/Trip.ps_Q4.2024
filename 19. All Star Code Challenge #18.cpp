// https://www.codewars.com/kata/5865918c6b569962950002a1/solutions/cpp
#include <string>

unsigned int strCount(const std::string& word, char letter){
  unsigned int result = 0;
  for(int i = 0; i < word.length(); i++)
  {
    if (letter == word[i])
    {
      result++;
    }
  }
  return result;
}
