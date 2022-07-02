class Solution {
public:
    int search(vector<int>& v, int t) {
        auto it = find (v.begin(),v.end(),t);
        if(it == v.end()){
            return -1;
        }else {
            return (it - v.begin());
        }
        
    }
};