class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int ,int>m;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int nu;
        for (auto &it : m){
            if(it.second == 1){
                nu = it.first;
            }
        }return nu;
        
    }
};