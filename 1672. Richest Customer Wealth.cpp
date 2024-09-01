//1672. Richest Customer Wealth (https://leetcode.com/problems/richest-customer-wealth/description/)
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> accountsSums = {};
        for (int i = 0; i < accounts.size(); i++) {
            accountsSums.push_back(
                accumulate(accounts[i].begin(), accounts[i].end(), 0));
        }
        return *max_element(accountsSums.begin(), accountsSums.end());
    }
};
