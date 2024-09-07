// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/solutions/
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int result = 0;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 1; i+j <= arr.size(); j+=2) { // Loop for odd lengths (1, 3, 5...)
                vector<int> subarray(arr.begin()+i, arr.begin() + i+j);
                result += sum_of_elems(subarray);
            }
        }
        return result;
    }
    int sum_of_elems(vector<int>& vector) {
        return std::accumulate(vector.begin(), vector.end(), 0);
    }
};
/*
Iterations:
i = 0 (subarrays starting from index 0):
    len = 1 (subarray = [1])
    len = 3 (subarray = [1, 4, 2])
    len = 5 (subarray = [1, 4, 2, 5, 3])

i = 1 (subarrays starting from index 1):
    len = 1 (subarray = [4])
    len = 3 (subarray = [4, 2, 5])

i = 2 (subarrays starting from index 2):
    len = 1 (subarray = [2])
    len = 3 (subarray = [2, 5, 3])

i = 3 (subarrays starting from index 3):
    len = 1 (subarray = [5])

i = 4 (subarrays starting from index 4):
    len = 1 (subarray = [3])
*/
