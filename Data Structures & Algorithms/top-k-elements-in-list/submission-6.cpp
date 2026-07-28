class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++) {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>res;
        for(auto &it : mp) {
            res.push_back({it.second,it.first});
        }
        sort(res.rbegin(),res.rend());
        for(int i = 0 ; i < res.size() ; i++) {
            cout << res[i].first <<" " << res[i].second << endl;
        }
        vector<int>v;
        for(int i = 0 ; i < k ; i++) {
            v.push_back(res[i].second);
        }
        if(v.size() == 0) v = nums;
        return v;
    }
};
