#include <bits/stdc++.h>
using namespace std;  
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid[0].size();
        int n=grid.size();
        vector<int> pre(m);
        vector<int> cur(m);
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                if(i==0 && j==0) cur[0]=grid[0][0];
                else if(j==0) cur[i]=grid[0][i]+cur[i-1];
                else {
                    if(i==0) cur[0]=grid[j][0]+pre[0];
                    else cur[i]=min(cur[i-1],pre[i])+grid[j][i];
                }
            }
            pre=cur;
        }
        return cur[m-1];
    }
};