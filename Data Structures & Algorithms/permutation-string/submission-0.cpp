class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        is(s1.length() > s2.length()) return false;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(char ch : s1) {
            mp1[ch]++;
        }
        
        int window_length = s1.length();

        for(int i = 0 ; i < window_length ; i++) {
            mp2[s2[i]]++;
        }
        if(mp1 == mp2) return true;

        for(int r = window_length ; r < s2.size() ; r++) {
            mp2[s2[r]]++;
            int l = r - window_length;
            mp2[s2[l]]--;
            if(mp2[s2[l]] == 0) {
                mp2.erase(s2[l]);
                l++;
            }
            if (mp1 == mp2) return true;
        }
        return false;
    }
};
