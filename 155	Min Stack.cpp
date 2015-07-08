class MinStack {
public:
    void push(int x) {
        if(min.empty())
            min.push(x);
        else
            if(x<=min.top())
                min.push(x);
        data.push(x);
    }
    
    void pop() {
        if(data.top()==min.top())
           min.pop();
        data.pop();
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return min.top();
    }
private:
    stack<int> min;
    stack<int> data;
};
