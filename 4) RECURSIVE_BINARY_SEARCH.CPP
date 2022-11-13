// RECURSIVE BINARY SEARCH 

#include<bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(int low , int high , int arr[] , int x){
    if(low > high) return -1 ;
    int mid = (low + high)/2 ;
    if(arr[mid] == x) return mid+1 ;
    else if(arr[mid] > x) return recursiveBinarySearch(low , mid-1 , arr , x);
    else return recursiveBinarySearch(mid+1 , high , arr , x);
}

int main(){
    int n ; cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++) cin >> arr[i] ;
    int x ; cin >> x ;
    cout << recursiveBinarySearch(0 , n-1 , arr , x) << "\n" ;
}
