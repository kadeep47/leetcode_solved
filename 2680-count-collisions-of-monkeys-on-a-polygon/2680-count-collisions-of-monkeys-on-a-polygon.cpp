class Solution {
public:

int mod = 1e9 + 7;
    int bin(int a, int b) {
		int ans = 1;
		while(b) {
			if(b&1) {
                ans = (ans * 1LL * a) % mod;
            }
			a = (a * 1LL * a) % mod;
			b >>= 1;
		}
		return ans;
	}

    int monkeyMove(int n) {
        return (bin(2, n) - 2 + mod) % mod;
    }




};