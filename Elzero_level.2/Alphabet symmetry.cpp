//https://www.codewars.com/kata/59d9ff9f7905dfeed50000b0/solutions/cpp
#include <vector>
#include <string>

std::vector<int> solve(const std::vector<std::string>& arr) {  
    std::vector<int> result {};
    std::string alphCaptail = "ABCDEFGHIJKLMNOPQRSTUVWXZY";
    std::string alphSmall = "abcdefghijklmnopqrstuvwxyz";
  
    for(auto& word:arr){
      int count =0 ;
      for(int i=0;i<word.size();i++){
        if((word[i]==alphCaptail[i])||(word[i]==alphSmall[i])){
          count++;
        }
      }
      
      result.push_back(count);
    }
  return result;
};
