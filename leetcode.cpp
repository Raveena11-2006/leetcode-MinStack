class MinStack {
public:
// 2 stack lengai 
// 1 sari values ko push krega dusra minimum value ko push krega baki ko pop krdega 
    stack<int> st;
    stack<int> minSt;

    MinStack() {
    }

    void push(int val) {
        st.push(val);
// if stack 1 empty hua ya value choti hui stack 2 sai toh hum value ko push krengai
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    void pop() {
        // stack 1 and 2 dono ki value same hui toh dono ko pop krdengai 
        if (st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }
// and minimum value in stack 2 kai top pr hoga vo mil jyega
    int getMin() {
        return minSt.top();
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