class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        auto it = lower_bound(v.begin(),v.end(),target);
        return (it - v.begin());
    }
};