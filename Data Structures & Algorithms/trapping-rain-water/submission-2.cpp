class Solution {
public:
    int trap(vector<int>& height) {
    int final_count = 0;
    int can_contain = 0;
    int l = 0, r = height.size() - 1;
    int max_left = 0;
    int max_right = 0;
    while(l < r) {
        if(height[l] <= height[r]) {
            if(height[l] > max_left) {
                max_left = height[l];
            } else {
                can_contain += max_left - height[l];
            }
            l++;
        } else {
            if(height[r] > max_right) {
                max_right = height[r];
            } else {
                can_contain += max_right - height[r];
            }
            r--;
        }
    }
    return can_contain;
}
};
