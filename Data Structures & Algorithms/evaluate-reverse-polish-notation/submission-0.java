class Solution {
    public boolean isInt(String str) {
    if (str == null) return false;
    try {
            Integer.parseInt(str);
            return true;
        } catch (NumberFormatException e) {
            return false;
        }
    }
    public int evalRPN(String[] tokens) {
        int cnt=0;
        Stack<Integer>st = new Stack<>();
        for(int i=0;i<tokens.length;i++){
            if(!st.empty()){
                if(isInt(tokens[i])){
                    st.push(Integer.parseInt(tokens[i]));
                }
                else{
                    if(tokens[i].equals("+")){
                        int t=st.peek();
                        st.pop();
                        cnt=st.peek()+t;
                        st.pop();
                        st.push(cnt);
                    }
                    else if(tokens[i].equals("-")){
                        int t=st.peek();
                        st.pop();
                        cnt=st.peek()-t;
                        st.pop();
                        st.push(cnt);
                    }
                    else if(tokens[i].equals("*")){
                        int t=st.peek();
                        st.pop();
                        cnt=st.peek()*t;
                        st.pop();
                        st.push(cnt);
                    }
                    else if(tokens[i].equals("/")){
                        int t=st.peek();
                        st.pop();
                        cnt=st.peek()/t;
                        st.pop();
                        st.push(cnt);
                    }
                }
            }
            else{
                st.push(Integer.parseInt(tokens[i]));
            }
            
        }
        return st.peek();
    }
}
