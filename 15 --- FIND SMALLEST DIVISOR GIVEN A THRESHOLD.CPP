// PROBLEM LINK --- https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

#include<bits/stdc++.h>
using namespace std ;

// BINARY SEARCH ON ANSWERS 

bool blackBox(int mid,vector<int> &nums,int threshold){
    int size = nums.size() ;
    int ans = 0 ;
    for(int i=0 ; i<size ; i++){
        ans += (nums[i]+mid-1)/mid ;
    }
    return ans<=threshold ;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int maxi = *max_element(nums.begin() , nums.end()) ;
    int low = 1 , high = maxi , ans ;
    while(low <= high){
        int mid = low + (high-low)/2 ;
        if(blackBox(mid,nums,threshold)){
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
        int threshold ; cin >> threshold ;
        cout << smallestDivisor(nums,threshold) << endl ;
    }
}
