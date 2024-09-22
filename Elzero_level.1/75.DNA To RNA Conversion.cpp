// https://www.codewars.com/kata/5556282156230d0e5e000089/solutions/cpp

#include <string>

std::string DNAtoRNA(std::string dna){
  std::replace(dna.begin(),dna.end(),'T','U');
  return dna;
}
