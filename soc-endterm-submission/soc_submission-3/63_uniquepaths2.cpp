#include <bits/stdc++.h>
using namespace std;  
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid[0].size();
        int n=obstacleGrid.size();
        vector<int> prev_row(m);
        vector<int> curr_row(m);
        int up,left;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(obstacleGrid[i][j]==1)curr_row[j]=0;
                else {
                    if(i==0 && j==0)curr_row[0]=1;
                    else if(i==0) curr_row[j]=curr_row[j-1]; 
                    else {
                        if(j==0)curr_row[j]=prev_row[j];
                        else{
                            curr_row[j]=curr_row[j-1]+prev_row[j];
                        }
                    }
                }
            }
            prev_row=curr_row;
        }
        return curr_row[m-1];
    }
};