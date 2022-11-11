class MyQueue {
public:
    stack <int> ori;
    stack <int> temp;
    MyQueue() {
        
    }
    
    void push(int x) {
        
        while(!ori.empty()){
            temp.push(ori.top());
            ori.pop();
        }
        temp.push(x);
        while(!temp.empty()){
            ori.push(temp.top());
            temp.pop();
        }
        
    }
    
    int pop() {
        int p = ori.top();
        ori.pop();
        return p;
    }
    
    int peek() {
        return ori.top();
    }
    
    bool empty() {
        if(ori.empty()) return true;
        else return false;
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