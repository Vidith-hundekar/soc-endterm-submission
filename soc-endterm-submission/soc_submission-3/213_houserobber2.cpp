#include <bits/stdc++.h>
using namespace std;   
class Solution {
public:

    int f(int st,int end ,vector<int>& nums){
        if(end-st==0)return nums[st];
        if(end-st==1)return max(nums[st],nums[end]);
        int prev1 = max(nums[st],nums[st+1]);
        int prev2 = nums[st];
        int temp;
        for(int i=st+2;i<=end;i++){
            temp = prev1;
            prev1=max(nums[i]+prev2,prev1);
            prev2=temp;
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        if(n==3) return max(nums[0],max(nums[1],nums[2]));
        return max(nums[n-1]+f(1,n-3,nums) , f(0,n-2,nums));
    }
};