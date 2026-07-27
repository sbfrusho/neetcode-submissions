class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";
        for(int i = 0 ; i < strs[0].size() ; i++) {
            char ch = strs[0][i];
            for(int j = 1 ; j < strs.size() ; j++) {
                if(i >= strs[j].size() || ch != strs[j][i]) {
                    return pre;
                }
            }
            pre += ch;
        }
        cout << pre << endl;
        return pre;
    }

    
};