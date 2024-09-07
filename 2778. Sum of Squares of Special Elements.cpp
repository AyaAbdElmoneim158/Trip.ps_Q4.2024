// https://leetcode.com/problems/sum-of-squares-of-special-elements/submissions/1381808781/

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int result = 0;
        for (int i = 1; i <= nums.size(); i++) {
            if (nums.size() % i == 0) {
                result += nums[i - 1] * nums[i - 1];
            }
        }
        return result;
    }
};
