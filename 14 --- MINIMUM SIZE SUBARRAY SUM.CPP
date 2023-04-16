// PROBLEM LINK --- https://leetcode.com/problems/minimum-size-subarray-sum/description/

#include<bits/stdc++.h>
using namespace std ;

bool maxSumPossible(int i,int size,vector<int> &nums,int target){
    // USING SLIDING WINDOW TO FIND MAX SUBARRAY SUM OF SIZE I 
    int maxi = 0 , maxii = 0 ;
    for(int i1=0 ; i1<i ; i1++) maxi += nums[i1] ;
    maxii = maxi ;
    int l=0 , r=i ;
    while(r != size){
        maxi -= nums[l] ;
        maxi += nums[r] ;
        maxii = max(maxii , maxi) ;
        l++ ; r++ ;
    }
    return maxii >= target ;
}

int minSubArrayLen(int target, vector<int>& nums) {
    int size = nums.size() ;
    int low = 1 , high = size , ans ;
    bool flag = false ;
    while(low <= high){
        int mid = low + (high-low)/2 ;
        if(maxSumPossible(mid,size,nums,target)){
            ans = mid ;
            flag = true ;
            high = mid-1 ;
        }
        else low = mid+1 ;
    }
    if(flag) return ans ;
    else return 0 ;
}

int main(){
    int test ; cin >> test ;
    while(test--){
        int n,target ; cin >> n >> target ;
        vector<int> nums(n) ;
        for(int i=0 ; i<n ; i++) cin >> nums[i] ;
        cout << minSubArrayLen(target,nums) << endl ;
    }
}
