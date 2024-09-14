// https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitudes = {0};
        for (int i = 0; i <gain.size(); i++) {
            altitudes.push_back(altitudes[i]+gain[i] );
        }
        return *max_element(altitudes.begin(), altitudes.end());
    }
};
