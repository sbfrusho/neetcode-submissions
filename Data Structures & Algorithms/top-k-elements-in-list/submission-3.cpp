class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>res;
        for(int it : nums) {
            mp[it]++;
        }
        vector<pair<int,int>>vp;
        for(auto it : mp) {
            vp.push_back({it.second,it.first});
        }

        sort(vp.rbegin(),vp.rend());

        for(int i = 0 ; i < k ; i++) {
            res.push_back(vp[i].second);
        }
        if(res.size() == 0) {
            res = nums;
        }
         return res;
    }
};
