class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue <pair <long long int,pair <long int,long int>>> pq;

        for(int i =0;i< points.size();i++){
                int dis = pow(points[i][0],2) + pow(points[i][1],2);
                pq.push({dis, {points[i][0],points[i][1]}});
                while(pq.size() > k){
                    pq.pop();
                }
        }

        vector <vector <int>> ans;
        while(!pq.empty()){
            vector <int> t;
            pair <long long int, pair <long int ,long int>> pp = pq.top();
            t.push_back(pp.second.first);
            t.push_back(pp.second.second);
            ans.push_back(t);
            pq.pop();
        }

        return ans ;
    }
};