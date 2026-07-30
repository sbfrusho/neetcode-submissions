class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_price = 0;
        vector<vector<int>> res(n,vector<int>(0));
        for(int i = 0 ; i < prices.size() ; i++) {
            for(int j = i+1 ; j < prices.size() ; j++) {
                res[i].push_back(prices[j] - prices[i]);
            }
        }
        for(int i = 0 ; i < res.size() ; i++) {
            cout << "for : " << prices[i] << " : ";
            for(auto it : res[i]) {
                cout << it << " ";
                max_price = max(it,max_price);
            }
            cout << endl;
        }
        return max_price;
    }
};
