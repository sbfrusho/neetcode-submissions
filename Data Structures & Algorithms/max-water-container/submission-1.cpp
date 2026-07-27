class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_mul = 0;
        int mul = 0;
        for(int i = 0 ; i < heights.size() ; i++) {
            for(int j = 0 ; j < heights.size() ; j++) {
                int width = abs(i-j);
                int height = min(heights[i],heights[j]);
                int mul = width * height;
                max_mul = max(max_mul,mul);
            }
        }
        return max_mul;
    }
};
