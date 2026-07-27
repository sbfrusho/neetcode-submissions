class Solution {
public:
    int characterReplacement(string s, int k) {
        string str = "";
        map<char,int>mp;
        int controller;
        int len = 0;
        int max_cnt = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            mp[s[i]]++;
        }
        
        for(auto it : mp) {
            for(int start = 0 ; start < s.length() ; start++) {
                controller = k;
                len = 0;
                for(int i = start ; i < s.length() ; i++) {
                    if(it.first == s[i]) {
                        len++;
                        str += s[i];
                        // cout << str << endl;
                    }
                    else if(controller > 0){
                        str+=it.first;
                        len++;
                        controller--;
                        // cout <<"inside else if : (unmatched)" << str << " for ith value : " << i << " controller : " << controller << endl;;
                    }
                    else {
                        len = 0;
                        controller = k;
                        if(s[i] == it.first) {
                            len = 1;
                        }
                    }
                    max_cnt = max(max_cnt,len);
                }
            }
            
        }
        return max_cnt;
    }
};

