class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int f = count(nums.begin(),nums.end(),val);
        int k =f;
        while(k--){
            auto it = find(nums.begin(),nums.end(),val);
            nums.erase(it);
        }
        return (n-f);
    }
};