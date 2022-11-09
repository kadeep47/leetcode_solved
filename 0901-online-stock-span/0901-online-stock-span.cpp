class StockSpanner {
public : 
    StockSpanner() {
      
    }
    
      stack<pair<int, int>> stak;// store data for other days
    int next(int price) {
        
        int span = 1;
        while (!stak.empty() && stak.top().second <= price) {
            span= span+ stak.top().first;
            stak.pop();
        }
        stak.push({span,price});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */