class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // cout << "i am here" << endl;
        sort(nums.begin(),nums.end());


        int max_cnt = 0,cnt = 1;
        for(int i = 0 ; i < nums.size() ; i++) {
            cout << nums[i] << " " ;
        }

        cout << endl;
        for(int i = 1 ; i < nums.size() ; i++) {
            
            if(nums[i] == nums[i-1]) continue;
            
            
            else if(abs(nums[i] - nums[i-1]) == 1) {
                cnt++;
                // cout << i-1 << " : "<<nums[i]<<","<<nums[i-1] << " : "<< cnt << endl;
            }

            else{
                max_cnt = max(max_cnt,cnt);
                cnt = 1;
                // cout << i <<  " hoi beda";
            }
        }
        max_cnt = nums.size() != 0 ? max(max_cnt,cnt) : 0;  
        return max_cnt;
    }
};
