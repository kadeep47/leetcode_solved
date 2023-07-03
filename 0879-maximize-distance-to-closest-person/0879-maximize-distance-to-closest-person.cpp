class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        int left =-1;
        int ans = 0;

        for(int i =0;i<n;i++){
            if(seats[i] == 1){
                if(left == -1)ans = max(ans,i);
                else ans = max(ans, (abs(left-i))/2);
                left = i;
            }
        }

        if(seats[n-1] == 0) ans = max(ans,(n-1)-left);

        return ans;
    }
};