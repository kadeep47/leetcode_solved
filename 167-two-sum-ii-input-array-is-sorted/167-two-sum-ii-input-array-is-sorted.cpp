class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int low=0 ;int high = num.size()-1;
        vector<int>v;
        while(low< high){
            int sum = num[low]+num[high];
            // cout << low  << " "<< high << endl;
            // cout << num[low]  << " "<< num[high] << endl;
            if(sum > target){
                high--;
            }else if(sum == target){
                v.push_back((low+1));
                v.push_back((high+1));
                break;
            }else{
                low++;
            }
        }
        return v;
        
    }
};