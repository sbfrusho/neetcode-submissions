class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0 , r = nums.size() - 1, ans;
        while(l < r) {
            int mid = (l+r)/2;
            if(nums[mid] > nums[r]) {
                cout << "r" << r << endl;
                l = mid + 1;
            }
            else {
                cout << "l" << l << endl;
                r = mid;
            }
        }
        return nums[l];
    }
};