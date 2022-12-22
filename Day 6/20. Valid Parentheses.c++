//c++
class Solution {
public:
    bool isValid(string s) {
        stack <char> p;
        for(auto ch:s){
            if(ch=='(' || ch=='{' || ch=='['){
                p.push(ch);
            }
            else{
                if(p.empty()) return false;
                if(ch==')') if(p.top()=='(') p.pop();else return false;
                if(ch==']') if(p.top()=='[') p.pop();else return false;
                if(ch=='}') if(p.top()=='{') p.pop();else return false;
            }
        }
        if(p.empty()) return true;
        return false;
        
    }
};

//java
class Solution {
    public boolean isValid(String s) {
        Stack <Character> st=new Stack <Character>();
        for(Character ch:s.toCharArray()){
            if(ch=='(')
            st.push(')');
            else if(ch=='[')
            st.push(']');
            else if(ch=='{')
            st.push('}');
            else if(st.isEmpty() || st.pop()!=ch)
            return false;
        }
        return (st.isEmpty());

        
    }
}
