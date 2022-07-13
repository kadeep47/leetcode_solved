class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0;
        int pro =1;
        do{
            int rem = n%10;
            sum+=rem;
            pro*=rem;
            n /=10;
}
        while(n > 0);
        return (pro -sum);
    }
};