class MinStack {
public:
stack<int> s1,s2;
public:
    MinStack() {
        
    }
    
    void push(int val) {
      s1.push(val);
      if (s2.empty()){
          s2.push(val);
      }  
      else if (!s2.empty()){
          int ele=s2.top();
          int mini=min(ele,val);
          s2.push(mini);
      }
    }
    
    void pop() {
       if (s1.empty()){
           return;
       } 
       s1.pop();
       s2.pop();
    }
    
    int top() {
       if (s1.empty()){
           return -1;
       } 
       int ans=s1.top();
       return ans;
    }
    
    int getMin() {
       if (s2.empty()){
           return -1;
       } 
       int ans=s2.top();
       return ans;
    }
};