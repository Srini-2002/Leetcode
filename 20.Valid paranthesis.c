class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        for(auto k:s){
            if(k=='('||k=='{'||k=='[')
               a.push(k);
            else{
                if(a.empty()) return false;
                if(k==')')
                    if(a.top()=='(')
                    a.pop();
                    else return false;
                if(k=='}')
                    if(a.top()=='{')
                    a.pop();
                    else return false;
                if(k==']')
                    if(a.top()=='[')
                    a.pop();
                    else return false;    
            }
        } 
        return a.empty();
    }
    
};