
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int len = piles.size();
        int max_elem = piles.back();
        
        int l = 1,r = max_elem;
        vector<int>res;
        while(l <= r) {
            int mid = (l+r)/2;
            long long sum = 0;
            for(int i = 0 ; i < len ; i++) {
               
                int rate = piles[i] /mid;
                int rem = piles[i] % mid;
                if(rem)rate++;
                sum += rate;
                cout <<"mid = " << mid << " rate : " << rate << endl;
            }
            cout <<"Sum : " << sum << endl;
            if(sum<=h) {
                res.push_back(mid);
                cout <<"elements: "<< mid << endl;
                r = mid - 1;
            }
            else if(sum > h) {
                l = mid+1;
            }
        }
        return res.back();
        
    }
};