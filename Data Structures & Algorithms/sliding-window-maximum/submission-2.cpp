class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0 , r = 0 ;
        vector<int>output;
        deque<int>dq;

        while(r < nums.size()) {
            while(!dq.empty() && nums[dq.back()] < nums[r]) {
                dq.pop_back();
            }
            dq.push_back(r);
            if(l > dq.front()) {
                dq.pop_front();
            }
            if(r+1 >= k) {
                output.push_back(nums[dq.front()]);
                l++;
            }
            r++;
        }
        return output;
    }
};
