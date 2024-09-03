// https://leetcode.com/problems/create-target-array-in-the-given-order/description/
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target = {};
        for (int i = 0; i < nums.size(); i++) {
            target.insert(target.begin() + index[i], 1, nums[i]);
        }
        return target;
    }
};
