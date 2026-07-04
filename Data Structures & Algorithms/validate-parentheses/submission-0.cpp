class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char l:s){
            if(st.empty() && (l==']' || l==')' || l=='}')){
                return false;
            }
            else if(!st.empty() && ((st.top()=='{' and l=='}') || (st.top()=='[' and l==']' )|| (st.top()=='(' and l==')'))){
                st.pop();
            }
            else{
                st.push(l);
            }
        }
        return st.empty();
    }
};
