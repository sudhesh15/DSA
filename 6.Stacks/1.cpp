//Evaluate Reverse Polish Notation
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto x: tokens){
            if(x == "+" || x == "-" || x == "*" || x == "/"){
                int num2 = st.top(); st.pop();
                int num1 = st.top(); st.pop();
                if(x=="+"){
                    st.push(num1+num2);
                }
                if(x=="-"){
                    st.push(num1-num2);
                }
                if(x=="*"){
                    st.push(num1*num2);
                }
                if(x=="/"){
                    st.push(num1/num2);
                }
            }else{
                int strToInt = stoi(x);
                st.push(strToInt);
            }
        }
        return st.top();
    }
};