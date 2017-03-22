/*
(¥¼§¹¦¨)
Problem:d153
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int m, n, tmp;
    cin>>m;
    for(int x=1; x<=m; x++){
      while(cin>>n){
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        
        if(n%2==0)
            cout<<arr[n/2-1]<<endl;
        if(n%2!=0)
            cout<<arr[(n+1)/2-1]<<endl;
      }
    }
    return 0;
}
