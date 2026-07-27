class Solution {
public:
    vector<string>res;
    string encode(vector<string>& strs) {
        string s="";
        vector<string>res;
        for(int i = 0 ; i < strs.size() ; i++) {
            s +=  strs[i] + to_string (strs[i].length() % 10) + "#";
        }
        cout << s << endl;
        res = decode(s);
        for(auto it : res) cout << it << " ";
        return s;
    }

    vector<string> decode(string s) {
        vector<string>res;
        string str = "";
        for(int i = 0 ; i < s.length() ; i++) {
            int d1 = s[i]-'0';
            if((d1 >= 0 && d1 <= 9) && s[i+1] == '#') {
                s.erase(i,1);
                // cout << "1st : " << s << "pushed to vector : " << str << endl;;
                s.erase(i,1);
                // cout << "2nd : " << s << "pushed to vector : " << str << endl;;
                res.push_back(str);
                str = "";
                i--;
            }
            else {
                str += s[i];
            }
        }
        return res;
    }
};