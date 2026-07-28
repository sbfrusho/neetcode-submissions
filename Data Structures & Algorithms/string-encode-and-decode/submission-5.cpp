class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i = 0 ; i < strs.size() ; i++) {
            int n = strs[i].length();
            int r = n % 10;
            s += strs[i] + to_string(r) + '{';
        }   
        cout << s << endl;   
        return s;  
    }

    vector<string> decode(string s) {
        vector<string>res;
        string str = "",intstr = "";
        int count = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            if(s[i] != '{') {
                str += s[i];
                count++;
            } else {
                cout << str << endl;
                int j = i;
                j = j - 1;
                int d1 = s[j] - '0';
                count = count - 1;
                if(count % 10 == d1) {
                    int n1 = str.length() - 1;
                    str.erase(n1,1);
                    res.push_back(str);
                    str = "";
                    count = 0;
                } else {
                    str += '{';
                }
            }
        }
        for(auto it : res) {
            cout << it << " ";
        }
        return res;
    }
};