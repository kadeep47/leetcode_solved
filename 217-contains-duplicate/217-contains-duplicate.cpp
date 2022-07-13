class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool re = false;
        map<int ,int>m;
        // (nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it : m){
        if(it.second > 1){
            re = true;
        }
        }
        
        return re;
        
    }
};