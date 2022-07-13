class Solution {
public:
    int dd(int n){
        int sum=0;
        while(n>0){
            int rem = n%10;
            sum=sum+(rem*rem);
            n/=10;
        }
        return sum;
    }
    
    bool isHappy(int n) {        
        int temp=n;
        while(1)
        {
            if(temp==89)
                return false;
            if(temp==1)
                return true;
            temp=dd(temp);
        }
        
    }
};