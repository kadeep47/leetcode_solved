class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k  =  k % n;
        int j = n-k;
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.begin()+j,nums.end());
        reverse(nums.begin(),nums.end());
    }
};