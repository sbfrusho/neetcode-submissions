class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0,cmp = 0;
        map<int,int>mp;
        int rng = (nums.size()/2)+1;
        for(int i = 0 ; i < nums.size() ; i++) {
            mp[nums[i]]++;
        }
        for(auto &it : mp) {
            cout << it.first << "-" << it.second << endl;
            if(it.second >= rng && it.second >= cmp) {
                cmp = it.second;
                cnt = it.first;
            }
        }
        return cnt;
    }
};