// PROBLEM LINK --- https://leetcode.com/problems/split-array-largest-sum/

#include<bits/stdc++.h>
using namespace std ;

// BINARY SEARCH ON ANSWERS 

bool blackBox(int mid,vector<int> &nums,int k){
    int size = nums.size() , i = 0 ;
    int curr_sum = 0 , splits = 1 ;
    while(i<size){
        if(curr_sum + nums[i] <= mid){
            curr_sum += nums[i++] ;
        }
        else{
            splits++ ;
            curr_sum = nums[i++] ;
        }
    }
    return splits <= k ;
}

int splitArray(vector<int>& nums, int k) {
    int n = nums.size() ;
    // AT MIN IF WE ARE GIVEN N SPLITS HENCE THEN MAXIMUM SUM WE
    // CAN OBTAIN IS MAXIMUM ELEMENT IN NUMS ARRAY 
    // AT MAX IF WE ARE GIVEN TO FORM ONE SUBARRAY HENCE THE SUM 
    // WILL BE THE SUM OF ALL ELEMENTS IN THE NUMS ARRAY
    int low = 0 , high = 0 ;
    for(auto it:nums){
        low = max(low, it) ;
        high += it ;
    } 

    int ans ;
    while(low <= high){
        int mid = low + (high-low)/2 ;
        if(blackBox(mid,nums,k)){
            ans = mid ;
            high = mid-1 ;
        }
        else low = mid+1 ;
    }
    return ans ;
}

int main(){
    int test ; cin >> test ;
    while(test--){
        int n ; cin >> n ;
        vector<int> nums(n) ;
        for(int i=0 ; i<n ; i++) cin >> nums[i] ;
        int k ; cin >> k ;
        cout << splitArray(nums,k) << endl ;
    }
    return 0 ;
}
