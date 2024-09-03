// https://leetcode.com/problems/decompress-run-length-encoded-list/description/
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> freqNums = {};
        for (int i = 0; i < nums.size(); i += 2) {
            freqNums.insert(freqNums.end(), nums[i], nums[i + 1]);
        }
        return freqNums;
    }
};
