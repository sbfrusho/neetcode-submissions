class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
       
        vector<vector<string>>res;
        map<string, vector<string>>mp;
        for(string s : strs) {
            string k = s;
            sort(k.begin(),k.end());
            mp[k].push_back(s);
        }
        for(auto &it : mp){
            res.push_back(it.second);
        }
        return res;
    }
};