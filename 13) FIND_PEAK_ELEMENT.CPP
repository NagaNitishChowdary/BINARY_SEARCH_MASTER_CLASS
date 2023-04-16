// PROBLEM LINK --- https://leetcode.com/problems/find-peak-element/

// FIND PEAK ELEMENT -- IS AN ELEMENT THAT IS STRICTLY GREATER THAN ITS NEIGHBOURS 
// LEETCODE
// MUST SOLVE IN O(LOG N)
// ARR[i] != ARR[i+1]
// INITIALLY IF ARR[MID] > ARR[MID+1] THEN THERE MUST BE A PEAK IN LEFT HALF
// EITHER IN RIGHT IF THE PEAK IS EXISTS OR NOT IT DOES NOT MATTERS
// ELSE THEN THERE MUST BE A PEAK IN RIGHT HALF WHILE IT DOES NOT MATTER IN LEFT HALF

#include <iostream>
using namespace std;
int main() {
    int n; cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++) cin >> arr[i] ;
    int low = 0 , high = n-1 ;
    while(low < high){
        int mid = low + (high - low)/2 ;
        // IF MIDDLE ELEMENT IS GREATER THAN ITS NEXT THEN 
        // THERE MUST EXIST PEAK IN LEFT SIDE
        if(arr[mid] > arr[mid+1]) high = mid ;
        // IF MIDDLE ELEMENT IS LESSER THAN ITS NEXT THEN 
        // THERE MUST EXIST PEAK IN RIGHT SIDE
        else low = mid+1 ;
    }
    cout << arr[low] ;
    return 0 ;
}
