class Solution {
public:
    double average(vector<int>& s) {
        double mi = *min_element(s.begin(),s.end());
        double ma = *max_element(s.begin(),s.end());
        double su = accumulate(s.begin(),s.end(),0);
        double dd = (su - (mi+ma)) / (s.size() -2);
        return dd;
        
    }
};