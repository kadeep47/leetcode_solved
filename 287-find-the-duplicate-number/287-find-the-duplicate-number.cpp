class Solution {
public:
    int findDuplicate(vector<int>& num) {
        sort (num.begin(),num.end());
        int x ;
        for(int i=0; i<num.size();i++){
            if(num[i] == num[i+1]) {
                x=  num[i];
                break;
            }
        }
        return x;
        
    }
};