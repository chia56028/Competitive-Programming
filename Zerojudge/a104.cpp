/*
Problem:a104
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
        for(int i=0; i<=n-1; i++){
            for(int j=0; j<n-1; j++){
                if(arr[j+1]<arr[j]){
                    tmp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=tmp;
                }
            }  
        }
		for(int k=0; k<n; k++){
            cout<<arr[k]<<" ";
		}
        cout<<endl;
    }
    return 0;

}
