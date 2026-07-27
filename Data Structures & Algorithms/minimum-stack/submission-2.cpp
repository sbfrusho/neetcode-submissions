class MinStack {
    vector<int>stack;
    vector<int>track;
    int minNum;
public:
    MinStack() {
        minNum = 1e9;
    }
    
    void push(int val) {
        stack.push_back(val);
        if(track.size() == 0) {
            track.push_back(val);
        }
        else track.push_back(min(val,track.back()));

    }
    
    void pop() {
        stack.pop_back();
        track.pop_back();
        
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return track.back();
    }
};