class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>results;
        
        for(int i = 0 ; i < temperatures.size() ; i++) {
            int temp = temperatures[i];
            int days = 0;
            bool hotter = false;
            for(int j = i + 1 ; j < temperatures.size() ; j++) {
                if(temperatures[j] > temp) {
                    days++;
                    hotter = true;
                    break;
                }
                else if(temp == temperatures[j]){days++;}
                else {
                    days++;
                }
            }
            if(!hotter) {
                days = 0;
            }
            results.push_back(days);
        }
        return results;
    }
};
