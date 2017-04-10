/*
Problem:ITSA-52-3
Author:ChingYu-Chia
Date:2017,04
*/

#include <iostream>
using namespace std;

int main() {
 	int x;
	cin>>x;
	for(int i=1; i<=x; i++){
	    int n;
	    cin>>n;
	    int a[n],b[n],m;
	    for(int j=0; j<n; j++){
			a[j]=j+1;
	    	b[j]=j+1;
	    }
	    while(cin>>m){
	    	if(m==0){
	        	for(int j=0; j<n-1; j++){
	        		cout<<a[j]<<" ";
	    		}
				cout<<a[n-1]<<endl;
    			break;
    		}
	    	for(int j=0; j<m; j++){
	        	b[m-1-j]=a[j];
	    	}
	      	for(int j=0; j<m; j++){
	        	a[j]=b[j];
	    	}
		}
	}
  	return 0;
}
