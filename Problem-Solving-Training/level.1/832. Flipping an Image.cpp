// https://leetcode.com/problems/flipping-an-image/description/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            for (auto& binary : image[i]) {
                binary = binary == 0 ? 1 : 0;
            }
            reverse(image[i].begin(), image[i].end());
        }
        return image;
    }
};
