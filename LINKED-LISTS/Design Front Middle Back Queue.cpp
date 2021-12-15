class FrontMiddleBackQueue {
public:
    vector<int> q;
    FrontMiddleBackQueue() {}
    
    void pushFront(int val) {
        q.insert(q.begin(), val);
    }
    
    void pushMiddle(int val) {
        int middle;
        middle = q.size() / 2;
        q.insert(q.begin() + middle, val);
    }
    
    void pushBack(int val) {
        q.push_back(val);
    }
    
    int popFront() {
        if(q.size() == 0)
            return -1;
        int temp = q[0];
        q.erase(q.begin());
        return temp;
    }
    
    int popMiddle() {
        if(q.size() == 0)
            return -1;
        
		int middle;
        if(q.size() % 2 == 0)
            middle = (q.size() / 2) - 1;
        else
            middle = q.size() / 2;
        
		int temp = q[middle];
        q.erase(q.begin() + middle);
        return temp;
    }
    
    int popBack() {
        if(q.size() == 0)
            return -1;
        else{
            int temp = q.back();
            q.pop_back();
            return temp;
        }
    }
};
