
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int cost = 1e9;
        map<int,int>mp;
        int ans = 0;
        for(int i = 0 ; i < prices.size() ; i++) {
            if(cost > prices[i]) {
                cost = prices[i];
                // cout << cost << endl;
            }
            for(int j = i+1 ; j < prices.size() ; j++) {
                int profit = prices[j] - cost;
                mp.insert({i,max(0,profit)});
            }
        }

        for(auto it : mp) {
            ans = max(it.second,ans);
        }

        return ans;

    }
};