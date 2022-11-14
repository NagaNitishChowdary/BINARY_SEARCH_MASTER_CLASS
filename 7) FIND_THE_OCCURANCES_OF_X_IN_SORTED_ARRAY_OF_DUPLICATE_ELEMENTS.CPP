// GIVEN X FIND THE NO OF OCCURANCES OF X 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++) cin >> arr[i] ;
    int x ; cin >> x ;
    int lb = lower_bound(arr,arr+n,x) - arr ;
    int ub = upper_bound(arr,arr+n,x) - arr ;
    cout << ub-lb << endl;
    // auto equalrange = equal_range(arr,arr+n,x) ;
    // cout << *equalrange.first << " " << *equalrange.second << endl;
}
