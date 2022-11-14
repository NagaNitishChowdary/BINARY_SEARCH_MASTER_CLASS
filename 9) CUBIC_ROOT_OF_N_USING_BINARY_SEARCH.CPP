// FIND THE INTEGER CUBIC ROOT OF N USING BINARY SEARCH 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n ;
    int low = 0 , high = n;
    // HIGH CAN BE N/3 
    int ans = 1 ;
    while(low <= high){
        // int mid = (low+high)/2 ;
        int mid = low + (high-low)/2 ;
        if(mid * mid * mid <= n){
            ans = mid ;
            low = mid+1 ;
        }
        else{
            high = mid-1 ;
        }
    }
    cout << ans << "\n" ;
}
