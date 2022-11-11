class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        auto i =  unique(v.begin(),v.end());
        v.resize(distance(v.begin(),i));
        return v.size();
    }
};