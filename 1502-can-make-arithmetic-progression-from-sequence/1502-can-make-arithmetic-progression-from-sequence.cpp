class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        bool re = true;
        sort(arr.begin(),arr.end());
        long int di = arr[0] - arr[1];
        for(int i=0;i<arr.size()-1;i++){
            if(di!= (arr[i] -arr[i+1])){
                re = false;
            }
        }
        return re;
    }
};