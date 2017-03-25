/*
Problem:d587
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, tmp;
    while(cin>>n){
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
		for(int k=0; k<n; k++){
			cout<<arr[k]<<" ";
		}
		cout<<endl; 
    }
    return 0;
}
