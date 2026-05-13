class MinStack {
public:
    stack<long> stack;
    std::stack<long> minStack;
    MinStack() {

    }


    void push(int val) {
        stack.push(val);
        if(minStack.empty())
        {
            minStack.push(val);
        }
        else
        {
            if(val > minStack.top())
            {
                val = minStack.top();
            }
            minStack.push(val);
        }
    }

    void pop() {
        if(stack.empty()) return;
        stack.pop();
        minStack.pop();
    }

    int top() {
        return stack.top();
    }

    int getMin() {
        return minStack.top();
    }
};