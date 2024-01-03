//Valid Paranthesis
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto ch:s){
            if(st.empty()){
                st.push(ch);
            }else if((st.top() == '(' && ch == ')') ||
                     (st.top() == '[' && ch == ']') ||
                     (st.top() == '{' && ch == '}')){
                st.pop();
            }else{
                st.push(ch);
            }
        }
        if(st.size() == 0) 
            return true;

        return false;
    }
};