class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> nn;
        for(int i =0 ; i < nums.size();i++){
            nn.push_back(nums[i]);
        }for(int i =0 ; i < nums.size();i++){
            nn.push_back(nums[i]);
        }
        return nn;
    }
};