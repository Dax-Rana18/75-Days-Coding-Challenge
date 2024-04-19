class MinStack {
    private:
        std::stack<int> min;
        std::stack<int> st;
public:
    MinStack() {
        min.push(INT_MAX);
    } 
    
    void push(int val) {
        if(val<=min.top()){
            min.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(min.top()==st.top()){
            min.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        // if(st.empty())
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