class Solution {
public:
 vector<vector<int>> re;
    vector<vector<int>> subsets(vector<int>& nums) {
// if lamdba fxn is inside the fxn then can it acces the variable of parent fxn or we have to keep it global..
        function< void(vector<int>&,int,vector<int>&)> gen = [&] (vector<int>& sub,int i ,vector<int>& nums){
            // int n = v.size();
            if(i == nums.size()){
                re.push_back(sub);
                return;
            }
            gen(sub,i+1,nums);
            sub.push_back(nums[i]);
            gen(sub,i+1,nums);
            sub.pop_back();
        };

        vector<int> sub;
        int i =0;
        gen(sub,i,nums);

        return re;
    }
};