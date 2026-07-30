class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    
        int count = 1,max_cnt = 0;
        for(int i = 1 ; i < nums.size() ; i++) {
            // cout << nums[i-1] << " ";
            if(nums[i] == nums[i-1]) continue;

            else if(abs(nums[i] - nums[i-1]) == 1) {
                count++;
            } else {
                max_cnt = max(count,max_cnt);
                count = 1;
            }
        }
        max_cnt = nums.size() != 0 ? max(max_cnt,count) : 0;
        return max_cnt;
    }
};
