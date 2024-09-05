// https://www.codewars.com/kata/57356c55867b9b7a60000bd7/solutions/cpp

int basicOp(char op, int val1, int val2) {
  switch (op) {
  case '+':
    return val1 + val2;
  case '-':
    return val1 - val2;
  case '*':
    return val1 * val2;
  case '/':
    return val1 / val2;
  }
}
