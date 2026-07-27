class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>idx;
        for(int i = 0 ; i < numbers.size() ; i++) {
            for(int j = 0 ; j < numbers.size() ; j++) {
                if(i == j) {
                    continue;
                }
                else {
                    int sum = numbers[i] + numbers[j];
                    if(sum == target && i < j) {
                        return {i+1,j+1};
                    }
                }
            }
        }
        return {};   
    }
};