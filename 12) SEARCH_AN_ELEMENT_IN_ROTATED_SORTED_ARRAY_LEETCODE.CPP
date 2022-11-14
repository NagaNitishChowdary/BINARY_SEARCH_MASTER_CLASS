// SEARCH FOR AN ELEMENT IN ROTATED SORTED ARRAY 
// THE TRUTH OR ASSUMPTION IS ATLEAST MINIMUM ONE PART OF 
// ARRAY IS SORTED AND CHECK FIRST IT IN SORTED PART

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ; cin >> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++) cin >> arr[i] ;
    // rotate(arr,arr+ (1 + rand() % n ) , arr+n );
    // for(int i=0 ; i<n ; i++) cout << arr[i] << " ";
    // cout << endl;
    int target ; cin >> target ;
    int low = 0 , high = n-1 ;
    while(low <= high){
        int mid = low + (high-low)/2 ;
        if(arr[mid] == target){ cout <<  mid << endl ; return 0 ; }
        // IF THE LEFT PART IS SORTED
        if(arr[mid] >= arr[low]){
            if(arr[low] <= target && arr[mid] >= target) high = mid ;
            else low = mid+1 ;
        }
        // OR ELSE THE RIGHT PART IS SORTED         
        else{
            if(arr[mid] <= target && arr[high] >= target) low = mid ;
            else high = mid-1 ;
        }
    }
    cout << -1 << endl ; 
    return 0 ;
}
