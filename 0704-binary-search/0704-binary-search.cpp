class Solution {
public:
    
//     int binary(vector <int>&v,int t){
        
        
//     }
    int search(vector<int>& nums, int target) {
        // auto it = find (v.begin(),v.end(),t);
        // if(it == v.end()){
        //     return -1;
        // }else {
        //     return (it - v.begin());
        // }
        
        
//         int lo =0;int hi = v.size()-1;
//         cout << lo << " "<< hi <<endl;
//         int mid =  lo + ((hi-lo)/2);
//         while(lo <= hi){
//             if(v[mid] == t) {
//                 return mid;
//             }
            
//             if(v[mid] < t){
//                 lo = mid+1;
//                           }
//             else {
//                 hi = mid-1;
//             }
//         }
        
//         return -1;
        
        
         int n = nums.size()-1;
        int low = 0, high = n;
        while( low <= high){
            int mid = low + (high-low)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) high = mid -1;
            else low = mid + 1;
        }
        return -1;
    }
};