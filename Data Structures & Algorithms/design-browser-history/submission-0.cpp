class BrowserHistory {
    stack<string> forwardHistory, backwardHistory;
public:
    BrowserHistory(string homepage) {
        backwardHistory.push(homepage);
    }
    
    void visit(string url) {
        backwardHistory.push(url);
        forwardHistory = stack<string>();
    }
    
    string back(int steps) {
            // return only x steps
            while(steps-- && backwardHistory.size() > 1){
                forwardHistory.push(backwardHistory.top());
                backwardHistory.pop();
            }
            string curr = backwardHistory.top();

        return curr;
    }
    
    string forward(int steps) {
        // return curr
        while(steps-- && !forwardHistory.empty()){
            backwardHistory.push(forwardHistory.top());
            forwardHistory.pop();
        }
        return backwardHistory.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */