class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>dif;
        for(int i = 0 ; i < nums.size() ; i++) {
            int x = target - nums[i];
            for(int j = 0 ; j < nums.size() ; j++) {
                if(i != j && x == nums[j]) {
                    return {i,j};
                }
            }
        }  
        return {}; 
    }
    
};