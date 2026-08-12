class MinStack {
public:
    MinStack() {
        
    }
    
 vector<pair<int,int>>v;
void push(int val) {
    if(v.empty()) {
        v.push_back({val,val});
    } else {
        int currentMin = min(val,v.back().second);
        v.push_back({val,currentMin});
    }
}
    
void pop() {
    v.pop_back();
}
    
int top() {
    return v.back().first;
}
    
int getMin() {
    return v.back().second;
}
};
