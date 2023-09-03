class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) {
		int n= mat.size();      
		int m= mat[0].size() ;  
		
        
        for (int i=0; i<m; i++){ 
            int base= mat[0][i];   
            int y=i+1; int x= 1;
            while (x<n && y<m){ 
                if (mat[x][y]!= base)return false;  
                x++; y++;
            }
        }
		
        
        for (int i=1; i<n; i++){ 
            int base= mat[i][0];    
            int y=1; int x= i+1;
            while (x<n && y<m){   
                if (mat[x][y]!= base)return false;   
                x++; y++;
            }
        }
        
        return true;
    }
};