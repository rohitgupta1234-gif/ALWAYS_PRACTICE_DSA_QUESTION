class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s2.push(x);
    }
    
    int pop() {
        if(s2.empty()){
            return -1;
        }
        else{
            while(s2.size()!=1){
                s1.push(s2.top());
                s2.pop();
            }
            int d=s2.top();
            s2.pop();
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            return d;
        }
    }
    
    int peek() {
         if(s2.empty()){
            return -1;
        }
        else{
            while(s2.size()!=1){
                s1.push(s2.top());
                s2.pop();
            }
            int d=s2.top();
            s2.pop();
            s1.push(d);
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            return d;
        }
    }
    
    bool empty() {
        return s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */