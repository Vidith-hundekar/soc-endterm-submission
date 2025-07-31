#include <bits/stdc++.h>
using namespace std;    
class Solution {
public:

    bool f(vector<int>& nums,int target){
        int n=nums.size();
        if(target==0)return true;
        vector<bool> pre(target+1),cur(target+1);
        for(int i=1;i<=target;i++) {
            if(i==nums[0]) pre[i]=true;
            else pre[i]=false;
        }
        for(int i=1;i<n;i++){
            for(int tar=1;tar<=target;tar++){
                if(pre[tar]){
                    cur[tar]=true;
                } else if( tar > nums[i] && pre[tar-nums[i]]){
                    cur[tar]=true;
                }else cur[tar] = false;
            }
            pre=cur;
            if(cur[target]) return true;
        }
        return false;
    }

    bool canPartition(vector<int>& nums) {
        int sum=0,target;
        for(auto i:nums) sum+=i;
        if(sum%2!=0)return false;
        else {
            target=sum/2;
            return f(nums,target);
        }
    }
};