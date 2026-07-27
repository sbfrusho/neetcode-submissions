
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int sum;
        for(string ch : tokens) {
            if(ch == "+" || ch == "-" || ch == "*" || ch == "/") {
                int d1 = st.top();
                st.pop();
                int d2 = st.top();
                st.pop();
                if(ch == "+"){
                    sum = d1 + d2;
                }
                else if(ch == "-") {
                    sum = d2-d1;
                }
                else if(ch == "*") {
                    sum = d1 * d2;
                }
                else if(ch == "/"){
                    sum = d2/d1;
                }
                cout << d1 << ch << d2 << " = " << endl;
                st.push(sum);
            }
            else {
                int number = stoi(ch);
                st.push(number);
            }

        }
        int res = st.top();
        return res;
        
    }
};