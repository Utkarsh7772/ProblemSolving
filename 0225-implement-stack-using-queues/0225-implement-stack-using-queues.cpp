class MyStack {
    queue<int>q1;
    queue<int>q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size()>1)
        {
            int val=q1.front();
            q1.pop();
            q2.push(val);
            }
        int top=q1.front();
        q1.pop();
        swap(q1,q2);
        return top;
    }
    
    int top() {
        while(q1.size()>0)
        {
            int val=q1.front();
            q1.pop();
            q2.push(val);
        }
        int top=q2.back();
        swap(q1,q2);
        return top;
    }
    
    bool empty() {
        return (q1.size()==0);
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */