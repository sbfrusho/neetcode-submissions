class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int>st;
    for(string ch : tokens) {
        if(ch == "+" || ch == "-" || ch == "*" || ch == "/") {
            int n1 = st.top();
            st.pop();
            int n2 = st.top();
            st.pop();

            if(ch == "+") {
                int sum = n1 + n2;
                st.push(sum);
            } else if(ch == "-") {
                int sum = n2 - n1;
                st.push(sum);
            } else if(ch == "*") {
                int mul = n1 * n2;
                st.push(mul);
            } else if(ch == "/") {
                int div = n2 / n1;
                st.push(div);
            }

        } else {
            int n = stoi(ch);
            st.push(n);
        }
    }
    int res = st.top();
    st.pop();
    return res;
}

};
