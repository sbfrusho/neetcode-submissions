class Solution {
public:
    bool isPalindrome(string s) {
        
        int l = 0;
        int r = s.length()-1;
        while(l <= r) {
            // cout << " Hello " << endl;
            if(((s[l] >= 'A' && s[l] <= 'Z') || (s[l] >='a' && s[l] <= 'z') || (s[l] >= '0' && s[l] <= '9')) && ( (s[r] >= 'A' && s[r] <= 'Z') || (s[r] >='a' && s[r] <= 'z') || (s[r] >= '0' && s[r] <= '9'))) {
                if(tolower(s[l])  == tolower(s[r]) || s[l] == s[r]) {
                    // cout << s[l] <<" : " << s[r] << endl;
                    l++;
                    r--;
                }
                else{
                    return false;
                }
            }
            else if(!((s[l] >= 'A' && s[l] <= 'Z') || (s[l] >='a' && s[l] <= 'z'))) {
                l++;
            }
            else if(!((s[r] >= 'A' && s[r] <= 'Z') || (s[r] >='a' && s[r] <= 'z'))) {
                r--;
            }
            
        }
        return true;
    }
};
