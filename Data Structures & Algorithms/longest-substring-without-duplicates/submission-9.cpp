class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
    set<char>charSet;
    int l = 0;
    int res = 0;
    for(int r = l ; r < s.length() ; r++) {
        while(charSet.count(s[r])) {
            charSet.erase(s[l]);
            l++;
        }
        charSet.insert(s[r]);
        res = max(res,r-l+1);
    }
    for(char ch : charSet) {
        cout << ch;
    }
    return res;
}
};
