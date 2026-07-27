class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        bool found = false;
        string ns = "";
        sort(s1.begin(),s1.end());
        for(int i = 0 ; i < s2.length() ; i++) {
            ns = "";
            for(int j = 0 ; j < s1.length() ; j++) {
                ns += s2[i + j];
            }
            sort(ns.begin(),ns.end());
            // cout <<s1 << " " << ns << endl;
            if(s1 == ns) {
                found = true;
                return found;
            }
        }
        return found;
    }
};