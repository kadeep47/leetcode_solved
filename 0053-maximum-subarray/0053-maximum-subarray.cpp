class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum =INT_MIN ;
        int crtsum =0;
        for(int i=0;i<nums.size();i++){
            crtsum += nums[i];
            if(crtsum < 0){
                crtsum=0;
            }
            maxsum = max(crtsum,maxsum);
        }
        if(maxsum ==0){
            auto it = find(nums.begin(),nums.end(),0);
                if(it == nums.end()){
                    maxsum = *max_element(nums.begin(),nums.end());
                }
        }
        return maxsum;
    }
};