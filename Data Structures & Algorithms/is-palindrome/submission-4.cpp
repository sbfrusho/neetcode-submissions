class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "", s2 = "";
        for(int i = 0 ; i < s.length() ; i++) {
            if(isalnum(s[i])) {
                s1 += tolower(s[i]);
            }
        }
        s2 = s1;
        cout << s1 << " " << s2 << endl;
        reverse(s2.begin(),s2.end());
        cout << s1 << " " << s2 << endl;
        if(s1 == s2) return true;
        else return false;
    }
};
