// https://www.codewars.com/kata/5808dcb8f0ed42ae34000031/solutions/cpp

#include <string>
#include <iostream>
#include <iterator>
#include <map>
using namespace std; 
string switch_it_up(int number) {
  map < int, string > elements;

  // insert elements in random order
  elements.insert(pair < int, string > (0, "Zero"));
  elements.insert(pair < int, string > (1, "One"));
  elements.insert(pair < int, string > (2, "Two"));
  elements.insert(pair < int, string > (3, "Three"));
  elements.insert(pair < int, string > (4, "Four"));
  elements.insert(pair < int, string > (5, "Five"));
  elements.insert(pair < int, string > (6, "Six"));
  elements.insert(pair < int, string > (7, "Seven"));
  elements.insert(pair < int, string > (8, "Eight"));
  elements.insert(pair < int, string > (9, "Nine"));
  
  return elements.at(number);
}
