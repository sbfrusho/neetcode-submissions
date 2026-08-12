class MinStack {
public:
    MinStack() {
        
    }
    
    vector<int>v;
void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        int n = v.size() - 1;
        v.erase(v.begin() + n);
    }
    
    int top() {
        int n = v.size() - 1;
        return v[n];
    }
    
    int getMin() {
        int mini = INT_MAX;
        for(int i = 0 ; i < v.size() ; i++) {
            mini = min(mini, v[i]);
        }
        return mini;
    }
};
