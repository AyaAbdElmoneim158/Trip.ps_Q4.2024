// https://www.codewars.com/kata/59f11118a5e129e591000134/solutions/cpp
int repeats(std::vector<int>vec){
  int result = 0;
  for(auto& ele:vec){
    if(count(vec.begin(), vec.end(), ele)==1){
      result += ele;
    }
  } 
  return result;
}
