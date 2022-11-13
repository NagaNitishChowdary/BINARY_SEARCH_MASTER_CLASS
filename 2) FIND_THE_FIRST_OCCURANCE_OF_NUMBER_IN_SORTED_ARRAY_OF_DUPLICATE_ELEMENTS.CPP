// BINARY SEARCH --- LOWER BOUND IMPLEMENTATION
// GIVEN AN SORTED ARRAY OF DUPLICATE ELEMENTS 
// FIND THE FIRST OCCURANCE OF THE GIVEN NUMBER

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ; cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++) cin >> arr[i] ;
    int x ; cin >> x ;
    // auto it1 = lower_bound(arr,arr+n,4) ;
    // cout << it1 - arr << endl;
    int low = 0 , high = n-1 ;
    int ans = -1 ;
    while(low <= high){
        int mid = (low+high)/2 ;
        if(arr[mid] == x){
            ans = mid + 1 ;
            high = mid - 1 ;
            continue ;
        }
        else if(arr[mid] > x) high = mid - 1 ;
        else low = mid + 1 ;
    }
    if(ans == -1) cout << "ELEMENT NOT FOUND" << "\n";
    else cout << "FIRST OCCURANCE OF ELEMENT FOUND AT " << ans << " POSITION" << "\n";
}
