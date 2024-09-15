// https://www.codewars.com/kata/56f6ad906b88de513f000d96/solutions/cpp

#include<string>

using namespace std;

string bonus_time(int salary, bool bonus) {
  return bonus ? "$" + to_string(salary * 10) : "$" + to_string(salary);
}
