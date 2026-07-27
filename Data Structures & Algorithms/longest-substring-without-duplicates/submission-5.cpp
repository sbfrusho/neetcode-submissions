class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1) {
            return 1;
        }
        int n = s.length();
        string str = "";
        vector<int>arr(255,0);
        vector<int>res(n,0);
        int l = 0;
        map<int,int>mp;
        int max_cnt = 0;

        for(int i = l ; i < n ; i++) {
            
            int idx;
            idx = int(s[i]);

            // cout << idx << endl;
            
            
            str+=s[i];
            // cout << " Outside if : " << str << " " << str.size() <<endl;;
            // cout << idx << " : " << str;
            if(arr[idx] > 0) {
                int prev_idx = mp[idx];             
                int len_to_remove = prev_idx - l + 1; 
                int size_str = str.size()-1;
                max_cnt = max(max_cnt,size_str);
                str.erase(0, len_to_remove);          
                int removed_idx = 0;
                for(int j = 0 ; j < len_to_remove ; j++) {
                    removed_idx =  s[l+j];
                    arr[removed_idx]--;
                }
                // fill(arr.begin(),arr.end(),0);
                l = prev_idx+1;
                // cout << " Inside if : " << str << endl;
                // res[l] = str.length();
                // continue;
            }
            arr[idx]++;
            mp[idx] = i;
            max_cnt = max(max_cnt, (int)str.size());
            // cout << arr[idx] << endl;
        }
        
        // int a = str.length();
        // for(int i = 0 ; i < n ; i++) {
        //     max_cnt = max(max_cnt,res[i]);
        // }
        return max_cnt;
    }
};