class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_set<char>charSet;
        int l = 0;
        int res = 0;
        unordered_map<char,int>count;

        for(int r = 0 ; r < s.length() ; r++) {
            count[s[r]]++;
            int max_freq = 0;
            for(auto &it : count) {
                max_freq = max(max_freq,it.second);
            }
            while((r - l + 1) - max_freq > k) {
                count[s[l]]--;
                l++;
            } 
            res = max(res,r-l+1);
        }
        
        return res;
    }
};
