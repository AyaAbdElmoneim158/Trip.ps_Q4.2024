// https://www.codewars.com/kata/5672a98bdbdd995fad00000f/solutions/cpp

#include <string>

std::string rps(const std::string & player1,
  const std::string & player2) {
  if (player1 == player2) {
    return "Draw!";
  } else if ((player1 == "rock" && player2 == "scissors") ||
    (player1 == "paper" && player2 == "rock") ||
    (player1 == "scissors" && player2 == "paper")) {
    return "Player 1 won!";
  } else {
    return "Player 2 won!";
  }

}
