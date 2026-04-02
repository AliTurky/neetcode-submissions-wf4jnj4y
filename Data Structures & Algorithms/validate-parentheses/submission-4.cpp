class Solution {
public:
bool isValid(string s) {
    stack<char> par;
    if(s[0]==']' || s[0] == '}' || s[0] == ')')
        return false;
    for (int i = 0; i < s.size(); ++i) {
       if(s[i]=='{' || s[i] == '[' || s[i] == '(')
       {
           par.push(s[i]);
       }
       else if(!par.empty())
       {
            if(s[i]=='}' && par.top()=='{') {
                par.pop();
            }
            else if(s[i]==')' && par.top()=='(')
            {
                par.pop();
            }
            else if(s[i]==']' && par.top()=='[')
            {
                par.pop();
            }
            else{
                return false;
            }
       }
         else if(par.empty())
       {
           return false;
       }
    }
    return par.empty();


}
};
