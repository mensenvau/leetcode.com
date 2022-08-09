class Solution {
public:
    bool isValid(string s) {
        
        
        stack<char> st ; 
        
        for(auto &x:s){
            if(x=='(' || x=='{' || x=='[') st.push(x);
            else{
                
                if(st.empty()) return false;
                
                if(st.top()=='(' && x==')') { st.pop(); continue; }
                if(st.top()=='{' && x=='}') { st.pop(); continue; }
                if(st.top()=='[' && x==']') { st.pop(); continue; }
                
                return false;
            }
        }
        
         if(!st.empty()) return false;
         return true;
    }
};
