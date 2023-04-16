// PROBLEM LINK --- https://www.codingninjas.com/codestudio/problems/divide-chocolates_1466966?leftPanelTab=0

#include<bits/stdc++.h>
using namespace std ;

// BINARY SEARCH ON ANSWERS

bool blackBox(int mid,vector<int> &arr,int k){
    int sumi = 0 ;
    for(int i=0 ; i<arr.size() ; i++){
        sumi += arr[i] ;

        if(sumi >= mid){
            k-- ; 
            sumi = 0 ;
        }
    }
    return  k<=0 ;
}

int getMaximumSweetness(vector<int> &arr, int k)
{
    // Write your code here.
    int size = arr.size() ;
    // ATLEAST NINJA GET ATLEAST ONE PIECE
    // HENCE THAT SHOULD BE MINIMIZED
    // ATMOST NINJA GET ALL OF THE SWEETNESS 
    // AS HIS FRIENDS MAY BE 0 
    int low = 0 , high = 0 ;
    for(auto it:arr){
        // low = min(low , it) ;
        high += it ;
    }

    // cout << low << " " << high << endl ;

    int ans ;
    while(low <= high){
        int mid = low + (high-low)/2 ;
        // cout << mid << endl ;
        if(blackBox(mid,arr,k+1)){
            ans = mid ;
            low = mid+1 ;
        }
        else{
            high = mid-1 ;
        }
    }

    return ans ;
}

int main(){
    int test ; cin >> test ;
    while(test--){
        int n,k ; cin >> n >> k ;
        vector<int> arr(n) ;
        for(int i=0 ; i<n ; i++) cin >> arr[i] ;
        // int k ; cin >> k ;
        cout << getMaximumSweetness(arr,k) << endl ;
    }
    return 0 ;
}
