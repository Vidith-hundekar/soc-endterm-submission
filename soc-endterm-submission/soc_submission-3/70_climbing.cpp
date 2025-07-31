#include <bits/stdc++.h>
using namespace std;   
class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int prev1=2,prev2=1,temp;
        for(int i=3;i<=n;i++){
            temp=prev1;
            prev1+=prev2;
            prev2=temp;
        }
        return prev1;
    }
};