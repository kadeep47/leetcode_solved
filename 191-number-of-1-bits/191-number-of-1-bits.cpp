class Solution {
public:
    int hammingWeight(uint32_t n) {
        int re=  __builtin_popcount(n);  // return  the number of setbit
        return re;
    }
};