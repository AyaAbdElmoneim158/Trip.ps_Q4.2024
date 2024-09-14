// https://www.codewars.com/kata/5aa736a455f906981800360d/solutions/cpp

bool feast(std::string beast, std::string dish){
  return (beast[0]==dish[0])&&(beast.back()==dish.back());
}
