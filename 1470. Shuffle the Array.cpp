//1470. Shuffle the Array (https://leetcode.com/problems/shuffle-the-array/description/)
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result = {};
        int x = 0; 
        int y = n;

        for (int i = 0; i < nums.size() / 2; i++) {
            result.push_back(nums[x + i]);
            result.push_back(nums[y + i]);
        }
        return result;
    }
};
