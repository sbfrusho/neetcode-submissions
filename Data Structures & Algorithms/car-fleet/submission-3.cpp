
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<float>time;
        vector<pair<int,float>>pos_time;
        
        for(int i = 0 ; i < position.size() ; i++) {
            int dist = target - position[i];
            float avg =(float) dist/speed[i];
            pos_time.push_back({position[i],avg});
        } 
        int fleet = 0;
        float maxTime = 0;
        sort(pos_time.begin(), pos_time.end(),
             [](auto &a, auto &b) {
                 return a.first > b.first;
             });
        for(auto &p : pos_time) {
            if(p.second > maxTime){
                fleet++;
                maxTime = p.second;
            }

        }
        return fleet;
            
    }
};