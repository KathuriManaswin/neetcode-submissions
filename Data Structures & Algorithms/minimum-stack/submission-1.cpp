class MinStack {

public:
    stack<int> stck;
    stack<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        stck.push(val);
        val=std::min(val, minStack.empty()? val : minStack.top());
        minStack.push(val);
    }
    
    void pop() {
        stck.pop();
        minStack.pop();
    }
    
    int top() {
       return  stck.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
