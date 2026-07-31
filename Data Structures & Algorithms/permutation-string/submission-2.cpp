class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int n = s1.length();
        int n1 = s2.length();
        if(n > n1) return false;

        for(int i = 0 ; i <= n1 - n ; i++) {
            string sub = s2.substr(i,n);
            cout << sub << endl;
            sort(sub.begin(),sub.end());
            if(s1 == sub) {
                return true;
            }
        }
        return false;
    }
};
