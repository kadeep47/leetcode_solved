class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> addition ;
        for(int i  =0 ; i < nums.size();i++){
            for(int j =0 ; j < i ; j++){
                int num = nums[i] + nums[j];
                if(num == target){
                    addition.push_back(i);
                    addition.push_back(j);
                    break;
                }
            }
        }
        return addition ;
    }
};