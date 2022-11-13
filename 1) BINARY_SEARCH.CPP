// FOR BINARY SEARCH , THE ARRAY MUST BE IN SORTED ORDER 
// THE TIME COMPLEXITY OF BINARY SEARCH IS O(LOG N)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ; cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++) cin >> arr[i] ;
    int x ; cin >> x ;
    int low = 0 , high = n-1 ;
    bool flag = false ; 
    int pos;
    while( low <= high ){
        int mid = (low + high)/2;
        if(arr[mid] == x){
            pos = mid + 1 ;
            flag = true ;
            break ;
        }
        else if(arr[mid] > x) high = mid - 1 ;
        else if(arr[mid] < x) low = mid + 1 ;
    }
    if(flag == false) cout << "ELEMENT NOT FOUND" << "\n" ;
    else cout << "THE POSITION OF THE ELEMENT IS " << pos << "\n" ;
}
