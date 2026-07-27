class TimeMap {
public:
    TimeMap() {
        
    }
   
    map<string,vector<pair<string,int>>>mp;
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});
        
    }
    
    string get(string key, int timestamp) {
        vector<pair<string,int>> &vec = mp[key];
        int left = 0 , right = vec.size() - 1;
        string res = "";
        while(left<=right) {
            int mid = (left+right)/2;
            if(vec[mid].second <= timestamp) {
                left = mid+1;
                res = vec[mid].first;
            }
            else{
                right = mid - 1;
            }
        }
        return res;
    }
};
