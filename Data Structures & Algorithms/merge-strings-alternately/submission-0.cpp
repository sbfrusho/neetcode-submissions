class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int n1 = word1.length();
        int n2 = word2.length();
        int m = n1 + n2;
        int i = 0, j = 0;
        while(i < n1 || j < n2) {
            if(i < n1) {
                s += word1[i];
                i++;
            }
            if(j < n2) {
                s += word2[j];
                j++;
            }
        }
        cout << s << endl;
        return s;
    }
};