// https://www.codewars.com/kata/586c1cf4b98de0399300001d/solutions/cpp

int combat(int health, int damage){
  return (health > damage ? health - damage : 0);
}
