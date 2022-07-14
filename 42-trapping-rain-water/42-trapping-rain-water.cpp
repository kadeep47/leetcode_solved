class Solution {
public:
    int trap(vector<int>& a) {
        int lo =0;
        int hi= a.size()-1;
        int sum =0 ;
        int l =0 ;
        int r=0;        
        while(lo <hi){
            if(a[lo] >= a[hi]){
                if(a[hi] > r){
                    r = a[hi];
                }else{
                    sum+=(r-a[hi]);
                }
                hi--;
            }else {
                if(a[lo] >  l){
                    l = a[lo];
                }else{
                    sum+= (l -a[lo]);
                }
                lo++;
            }
        }
        return sum;
        
    }
};