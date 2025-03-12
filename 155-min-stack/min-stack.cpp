#include <stack>

class MinStack {
public:
    stack <long long> s;
    stack <long long> min;
    MinStack() {
        min.push(INT_MAX);
    }
    
    void push(int val) {
        if(val<=min.top() || min.empty())
        min.push(val);
        s.push(val); 
    }
    
    void pop() {
        if(s.top()==min.top())
            min.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */