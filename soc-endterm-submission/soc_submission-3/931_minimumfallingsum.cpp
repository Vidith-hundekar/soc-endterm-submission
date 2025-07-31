#include <bits/stdc++.h>
using namespace std;    
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int> pre(n);
        vector<int> cur(n);
        int ans=INT_MAX;

        for(int y=0;y<n;y++){
            for(int x=0;x<n;x++){
                if(y==0) cur[x]=matrix[0][x];
                else if(x==0){
                    cur[x]=min(pre[x],pre[x+1])+matrix[y][x];
                }else if(x==n-1){
                    cur[x]=min(pre[x],pre[x-1])+matrix[y][x];                    
                }else {
                    cur[x]=min(pre[x+1],min(pre[x],pre[x-1]))+matrix[y][x];    
                }
            }
            pre=cur;
        }

        for(int i=0;i<n;i++){
            ans=min(ans,cur[i]);
        }    
        return ans;    
    }
};