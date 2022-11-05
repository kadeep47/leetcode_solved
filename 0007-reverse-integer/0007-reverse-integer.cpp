
class Solution {
public:
    int reverse(int x) {
        long p =0;
        long si =1;
        if(x < 0){
            si =-1;
            x *= si; 
        }
        while(x>0){
            int rem = x%10 ;
            p*=10;
            p+=rem;
            x/=10;
        }

        return (p > INT_MAX || p < INT_MIN)? 0 : p*si;
    }
};