class Solution {
public:
int evalRPN(vector<string>& tokens) {
    std::stack<string> stack;
    int ans = 0;
    int first=0;
    int second=0;
    for(auto it : tokens)
    {
        if(it == "+")
        {
            second = stoi(stack.top());
            stack.pop();
            first = stoi(stack.top());
            stack.pop();
            ans = first + second;
            stack.push(to_string(ans));
        }
        else if(it == "-")
        {
            second = stoi(stack.top());
            stack.pop();
            first = stoi(stack.top());
            stack.pop();
            ans = first - second;
            stack.push(to_string(ans));
        }
        else if(it == "*")
        {
            second = stoi(stack.top());
            stack.pop();
            first = stoi(stack.top());
            stack.pop();
            ans = first * second;
            stack.push(to_string(ans));
        }
        else if(it == "/")
        {
            second = stoi(stack.top());
            stack.pop();
            first = stoi(stack.top());
            stack.pop();
            ans = first / second;
            stack.push(to_string(ans));
        }
        else
        {
            stack.push(it);
        }

     }
    return stoi(stack.top());
 }
};
