



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> re;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0 ;i < n-2 ;i++){
            if(i ==0 || (i >0 && nums[i]!= nums[i-1])){
                int lo = i+1;
                int hi = n-1;
                int sum = 0-nums[i];
                while(lo < hi){
                    if(nums[lo]+nums[hi]> sum){
                        hi--;
                    }else if (nums[lo]+nums[hi]< sum){
                        lo++;
                    }else 
                    {
                        vector <int > v;
                        v.push_back(nums[lo]);
                        v.push_back(nums[i]);
                        v.push_back(nums[hi]);
                        
                        
                        re.push_back(v);
                        
                        while(lo< hi && nums[lo]== nums[lo+1])lo++;
                        while(lo< hi && nums[hi]== nums[hi-1])hi--;
                        
                        lo++;
                        hi--;
                    }
                }
            }
        }
        return re;
    }
};