// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
    public:
    int firstBadVersion(int n) {
//         long long int beg,last,mid;
//         low = 1 , last = n;
//         long int pos = 1;
//         while(beg<=last){
            
//             mid = beg + (last-beg)/2;
//             bool x = isBadVersion(mid);
//             if(x == true){
//                 pos = mid;
//                 last = mid-1;
//             }
//             else
//                 beg = mid+1;
//         }

        long long int lo,hi,mid,pos ;
        lo =0;hi=n;
        
        while(lo<=hi){
            mid = lo+(hi-lo)/2;
            bool set = isBadVersion(mid);
            
            if(set == true){
                pos = mid ;
                hi=mid-1;
            }else{
                lo = mid+1;
            }
        }

        return pos;
    }
};