//  https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/1383153135/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result = {};
        int mixNum = *std::max_element(candies.begin(), candies.end());
        for (auto& candie : candies) {
            (candie + extraCandies >= mixNum) ? result.push_back(true)
                                              : result.push_back(false);
        }
        return result;
    }
};
