// FIND THE INTEGER SQRT OF N USING BINARY SEARCH
// I * I < = N  , I SHOULD BE BIG 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n ;
    int low = 1 , high = n ;
    int ans = 1 ;
    while(low <= high){
        // int mid = (low + high)/2 ;
        int mid = low + (high-low)/2 ;
        if(mid * mid <= n){
            ans = mid ;
            low = mid+1 ;
        }
        else high = mid-1 ;
    }
    cout << ans << endl;
}
