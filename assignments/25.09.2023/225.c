class MyStack {
public:
queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
       q1.push(x);
    }
    
    int pop() {
      int n = q1.size();
        while(n > 1) {
            int ele = q1.front();
            q2.push(ele);
            q1.pop();
            n--;
        }
        int x = q1.front();
        q1.pop();
        
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        return x;  
    }
    
    int top() {
       int x=pop();
       q1.push(x);
       return x; 
    }
    
    bool empty() {
       return q1.empty(); 
    }
};