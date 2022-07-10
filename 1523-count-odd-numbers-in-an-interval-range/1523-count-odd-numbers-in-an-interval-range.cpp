class Solution {
public:
    int pa(int n ){
        return(n%2);
    }
    int countOdds(int lo, int hi) {
        int re;
        int n = hi - lo;
        if(pa(lo) ==  pa(hi) && pa(lo) ==1){
            re=  (n/2)+1;
        }else if(pa(lo)!=pa(hi)){
                        re=  (n/2)+1;
        }else if(pa(lo) ==  pa(hi) && pa(lo) ==0){
            re = n/2;
        }
        return re;
    }
};