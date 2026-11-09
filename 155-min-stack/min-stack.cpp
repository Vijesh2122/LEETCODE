class MinStack {
public:
    stack<int> st;
    stack<int> mini;

    MinStack() {

    }

    void push(int val) {
        st.push(val);

        if (mini.empty())
            mini.push(val);
        else
            mini.push(min(val, mini.top()));
    }

    void pop() {
        st.pop();
        mini.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */