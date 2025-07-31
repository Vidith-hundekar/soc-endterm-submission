#include <bits/stdc++.h>
using namespace std;   
class Solution {
public:

    int uniquePaths(int m, int n){
        vector<int> prev_row(m);
        vector<int> curr_row(m);
        int up,left;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0) curr_row[j]=1; 
                else {
                    if(j==0)curr_row[j]=1;
                    else{
                        curr_row[j]=curr_row[j-1]+prev_row[j]
;                    }
                }
            }
            prev_row=curr_row;
        }
        return curr_row[m-1];
    }
};