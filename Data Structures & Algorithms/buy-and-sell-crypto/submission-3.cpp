class Solution {
public:
int maxProfit(vector<int>& prices) {
        int l = 0, r = prices.size() - 1, n = l+1;
        int max_profit = 0;
        int buy_price = prices[0];
        for(int i = 1 ; i <= r ; i++) {
            if(buy_price >= prices[i]){
                buy_price = prices[i];
            } else {
                cout << "buy price is : " << buy_price << " sell price : " <<prices[i]<<endl; 
                max_profit = max(max_profit,prices[i] - buy_price);
            }
        }
        return max_profit;
    }
};
