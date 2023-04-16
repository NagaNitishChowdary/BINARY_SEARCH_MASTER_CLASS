// PROBLEM LINK --- https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ; cin >> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++) cin >> arr[i] ;
    rotate(arr,arr+ (1 + rand() % n ) , arr+n );
    // for(int i=0 ; i<n ; i++) cout << arr[i] << " ";
    // cout << endl;
    int low = 0 , high = n-1 ;
    while(low < high){
        int mid = low + (high - low)/2 ;
        if(arr[mid] < arr[high]){
            high = mid ;
        }
        else if(arr[mid] > arr[high]){
            low = mid+1 ;
        }
        else{
            high-- ;
        }
    }
    cout << arr[low] << " " << arr[high] << endl;
}
